#include<iostream>
#include<openssl/ssl.h>
using namespace std;
int main(int argc,char *argv[])
{
	//得到一个x509的数据结构
	auto b=BIO_new_file(argv[1],"rb");
	auto x=PEM_read_bio_X509(b,NULL,NULL,NULL);
	BIO_free(b);	
	//调用函数显示到标准输出
	b=BIO_new(BIO_s_file());
	BIO_set_fp(b,stdout,BIO_NOCLOSE);
	X509_print(b,x);
}
