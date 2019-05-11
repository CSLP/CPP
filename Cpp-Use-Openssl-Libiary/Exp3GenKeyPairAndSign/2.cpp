#include<iostream>
#include<openssl/ssl.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<openssl/md5.h>
#include<openssl/bio.h>
#include<openssl/pem.h>
#include<openssl/rsa.h>
#include<fstream>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
using namespace std;
//读取密钥
int main()
{
	//读取私钥信息,用作签名
	OpenSSL_add_all_algorithms();
	RSA*pri_key=RSA_new();
	BIO* in;
	in=BIO_new_file("/var/MyCA/pri.pem","rb");
	pri_key=PEM_read_bio_RSAPrivateKey(in,&pri_key,NULL,NULL);	
	//读取代签名文件并存储到字符数组
	int fd;
	fd = open("hello.txt", O_RDWR);
	char data[100];
	int n = read(fd,data,100);//read() Linux C 函数
	data[n] = 0;  //等效于data[n]='\0';
	//char data[100]="0";
	//read(fd,data,100);
	//data[strlen(data)]  也行,注意要初始化,不然极易出问题
	close(fd);
//	cout<<data;
//	调用MD5函数对字符串作哈希,同理存储hash后的字符数组也要初始化
	char hashdata[1000];
	memset(hashdata,0,sizeof(hashdata));	
	//char hashdata[1000]={'0'};
	MD5((unsigned char*)data,strlen(data),(unsigned char*)hashdata);
	//调用私钥对hash值签名
	char signdata[1000]="0";
	unsigned int signlen=0;
	if(RSA_sign(NID_md5,(unsigned char *)hashdata,strlen(hashdata),(unsigned char*)signdata,&signlen,pri_key)!=1)
		printf("RSA_sign err\n");
	//签名后的文件写入hello.sign
	fd=open("hello.sign",O_CREAT|O_RDWR,S_IRUSR|S_IWUSR);
	if(fd)	
	write(fd,signdata,signlen);
	else printf("open hello.sign err!\n");
	close(fd);

}
