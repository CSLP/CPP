#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int status;
    pid_t pid=fork();
    if(pid==0)
        sleep(30);
    else
    {
        wait(&status);
        if(WIFEXITED(status))
            printf("Child send one:%d\n",WEXITSTATUS(status));
        printf("Child PID:%d \n",pid);
        pid=fork();
        if(pid==0)
        ;
        else
        {
            printf("Child PID:%d\n",pid);
            wait(&status);
            if(WIFEXITED(status))
                printf("Child send one:%d\n",WEXITSTATUS(status));
        }
        
    }
    return 0;
    
}