#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/x509.h>
#include <openssl/x509v3.h>
#include <openssl/pem.h> 

void app_abort (char *msg)
{
	fprintf(stderr, msg);
	exit(-1);
} 

int main(int argc, char *argv[]){
	int i,ret;
	X509_LOOKUP *lookup;
	BIO *in = NULL;
	X509 *x = NULL;
	X509_STORE *cert_ctx = NULL;
	X509_STORE_CTX *csc;

	if (argc!=3)
   		app_abort("./a.out <CAfile> <certfile>");
	if ((cert_ctx = X509_STORE_new()) == NULL)
   		app_abort("Can't create cert_ctx");

	if ((lookup = X509_STORE_add_lookup(cert_ctx, X509_LOOKUP_file())) == NULL)
   		app_abort("Lookup CA file error"); 
	if (!(i = X509_LOOKUP_ctrl(lookup, X509_L_FILE_LOAD, 
	argv[1],(long)X509_FILETYPE_PEM, NULL))) 
    		app_abort("Can't open CAfile"); 
 	ERR_clear_error(); 
 
 	if ((in = BIO_new(BIO_s_file())) == NULL) 
    		app_abort("certfile BIO error"); 
 	if (BIO_read_filename(in, argv[2])<=0) 
   		app_abort("open certfile error");  
 	if ((x = PEM_read_bio_X509(in, NULL, NULL, NULL)) == NULL) 
   		app_abort("load certfile error");

	if ((csc = X509_STORE_CTX_new()) == NULL)
		app_abort("ctx init error");
	X509_STORE_CTX_init(csc, cert_ctx, x, NULL);
	if ((i = X509_verify_cert(csc)) == 1)
		printf("Status=OK(%d)\n", i);
	else
		printf("Status=Error(%d)\n", i);
}
