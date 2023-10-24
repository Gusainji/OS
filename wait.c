#include<stdio.h>
#include<unistd.h>
int main()
{
    if(fork() == 0)
    printf("hello from child\n");
    else{
        printf("hello your parent\n");
        wait(NULL);
        printf("child is terminated\n");
    }
    printf("bye\n");
    return 0;
}