#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#define BUF_SIZE 1024
using std::string;
void error_handling(string message);
int main(int argc, char *argv[])
{
    string x="helloworld";
    int serv_sock;
    int clnt_sock;
    struct sockaddr_in serv_addr;
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size;
    int str_len,i;
    char message[BUF_SIZE]="What happend?";
    if(argc!=2)
    {
        printf("Usage:%s<port>\n",argv[0]);
        exit(1);
    }
    serv_sock=socket(PF_INET,SOCK_STREAM,0);
    if(serv_sock==-1) error_handling("socket()error");
    //将第一个参数的指定的空间的第三个参数指定的大小置为第二个参数指定的值,用来光速初始化或者清零结构等空间
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=htonl(INADDR_ANY);
    serv_addr.sin_port=htons(atoi(argv[1]));
    if(bind(serv_sock,(struct sockaddr *) &serv_addr,sizeof(serv_addr))==-1)
        error_handling("bind()error");
    if(listen(serv_sock,5)==-1)
        error_handling("listen() error");
    clnt_addr_size=sizeof(clnt_addr);
    string expr;
    for(unsigned i=0;i<5;i++)
    {
        clnt_sock=accept(serv_sock,(struct sockaddr *)&clnt_addr,&clnt_addr_size);
        if(clnt_sock==-1)
            error_handling("accept() error");
        else 
            printf("Connected cllient %d \n",i+1); 
        while((str_len=read(clnt_sock,message,BUF_SIZE))!=0)
        {
            expr=message;
            auto rank=expr.find_first_of("+-*/");
            int result=10;
            switch(expr[rank])
            {
                case '+':
                {
                    for(auto i:expr)
                    {
                        if(isdigit(i))
                            result+=(expr[i]-'0');
                    }
                }
                default:result=10;
            }
            char mess[2];
            mess[0]=result+'0';
            mess[1]='\n';
            write(clnt_sock,mess,strlen(mess));
        }
        close(clnt_sock);
    }
    close(serv_sock);
    return 0;
}
void error_handling(string message)
{
    fputs(message.c_str(),stderr);
    fputc('\n',stderr);
    exit(1);
}