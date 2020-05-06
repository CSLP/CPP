#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#define BUF_SIZE 1024
using std::string;
void error_handling(string message);
int main(int argc,char *argv[])
{
    int sock;
    struct sockaddr_in serv_addr;
    int str_len=0,recv_len=0,recv_cnt=0;
    char message[BUF_SIZE];
    if(argc!=3)
    {
        exit(1);
    }
    sock=socket(PF_INET,SOCK_STREAM,0);
    if(sock==-1)
        error_handling("socket()error");
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=inet_addr(argv[1]);
    serv_addr.sin_port=htons(atoi(argv[2]));
    if(connect(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr))==-1)
        error_handling("connect()error!");
    else 
        puts("Connected.....");
    int a,b,c;
    while(1)
    {
        fputs("Input message:",stdout);
        fgets(message,BUF_SIZE,stdin);
        if(!strcmp(message,"q\n")||!strcmp(message,"Q\n"))
            break;
        str_len=write(sock,message,strlen(message));
        while(recv_len<str_len)
        {
            recv_cnt=read(sock,&message[recv_len],BUF_SIZE-1);
            if(recv_cnt==-1)
                error_handling("read()error!");
            recv_len+=recv_cnt;
        }
        printf("Message from server:%s",message);
    }
    close(sock);
    return 0;
}
void error_handling(string message)
{
    fputs(message.c_str(),stderr);
    fputc('\n',stderr);
    exit(1);
}






















