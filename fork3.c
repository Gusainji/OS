#include<stdio.h>
#include<unistd.h>
int main()
{
    if(fork() && (!fork())){
        if(fork() || frok()){
            frok();
        }
    }
    printf("2");
    return 0;
}