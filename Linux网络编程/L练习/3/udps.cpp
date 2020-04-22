#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/socket.h>
#include<string>
using std::string;
#define BUF_SIZE 30
int main(int argc,char *argv[])
{
    int serv_sock;
    char message[BUF_SIZE];
    int str_len;
    socklen_t clnt_adr_sz;
    struct sockaddr_in serv_adr,clnt_adr;
    if(argc!=2)
        exit(1);
    serv_sock=socket(PF_INET,SOCK_DGRAM,0);
    memset(&serv_adr,0,sizeof(serv_adr));
    serv_adr.sin_family=AF_INET;
    serv_adr.sin_addr.s_addr=htonl(INADDR_ANY);
    serv_adr.sin_port=htons(atoi(argv[1]));
    if(bind(serv_sock,(struct sockaddr *)&serv_adr,sizeof(serv_adr))==-1)
        exit(1);
    while(1)
    {
        clnt_adr_sz=sizeof(clnt_adr);
        str_len=recvfrom(serv_sock,message,BUF_SIZE,0,(struct sockaddr *)&clnt_adr,&clnt_adr_sz);
        sendto(serv_sock,message,str_len,0,(struct sockaddr *)&clnt_adr,clnt_adr_sz);
    }
    close(serv_sock);
    return 0;
}
