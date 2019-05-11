#include<iostream>
#include<openssl/ssl.h>
#include<openssl/pem.h>
using namespace std;
int main()
{
    //分配空间生成密钥对
    RSA *r = RSA_new();
    int bits = 1024;
    BIGNUM *e = BN_new();
    BN_set_word(e, 65537);
    RSA_generate_key_ex(r, bits, e, NULL);
    
   // RSA_print_fp(stdout, r, 0);打印密钥对信息
    
    BIO *out;
    out = BIO_new_file("/var/MyCA/pri.pem","w");//保存私钥,默认pem格式
    //这里生成的私钥没有加密，可选加密
    int ret = PEM_write_bio_RSAPrivateKey(out, r, NULL, NULL, 0, NULL, NULL);
    printf("writepri:%d\n",ret);
    BIO_flush(out);
    BIO_free(out);
    
    out = BIO_new_file("/var/MyCA/pub.pem","w");//保存公钥
    ret = PEM_write_bio_RSAPublicKey(out, r);
    printf("writepub:%d\n",ret);
    BIO_flush(out);
    BIO_free(out);
    
    BN_free(e);
    RSA_free(r);
}
