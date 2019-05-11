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
	//同上面,打开hello.txt文件并做hash保存在hashdata字符数组中用来比对
	int fd;
	fd = open("hello.txt", O_RDWR);
	char data[100]="0";
	read(fd,data,100);
	close(fd);
	char hashdata[1000]={'0'};
	MD5((unsigned char*)data,strlen(data),(unsigned char*)hashdata);
	//读取公钥
	BIO* in;
	in=BIO_new_file("/var/MyCA/pub.pem","rb");
	auto pub_key=PEM_read_bio_RSAPublicKey(in,NULL,NULL,NULL);	
	if(pub_key==NULL)
	{
		printf("read public key err!\n");
		return -1;
	}
	//读取hello.sign文件中的签名
	fd=open("hello.sign",O_RDWR);
	char signdata[300]="0";
	read(fd,signdata,300);
	close(fd);
	//比对
	if(RSA_verify(NID_md5,(unsigned char*)hashdata,strlen(hashdata),(unsigned char*)signdata,128,pub_key)!=1)
	{
		printf("RSA_verify err!\n");
		return -1;
	}
	printf("\nRSA_verify OK!\n");

}
