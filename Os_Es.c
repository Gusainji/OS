#include<stdio.h>
#include<unistd.h>
int main()
{
    int n;
    printf("Enter the size of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);
        int x  = fork();
        if(x == 0){
            int osum = 0;
            for(int i = 0;i < n;i++)
            {
                if(a[i] % 2 == 0)
                osum += a[i];
            }
            printf("Sum is %d\n",osum);
        }else{
            int esum = 0;
            for(int i = 0;i < n;i++){
                if(a[i] % 2 == 0)
                    esum += a[i];
            }
              printf("Sum is %d",esum);
        }
        return 0;
}