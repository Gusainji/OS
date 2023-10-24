#include<stdio.h>
#include<unistd.h>
int main()
{
    pid_t p;
    p = fork();
    if(p == 0){
        sleep(2);
        printf("Iam child having PID %d\n",getpid());
        printf("My parent PID is %d\n",getppid());
    }else{
        printf("Iam parent having PID %d\n",getpid());
        printf("My chaild PID is %d\n",p);
    }
}