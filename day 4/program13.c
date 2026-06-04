#include<stdio.h>

       int main(){
        int n;
        int a = 0, b = 1 ,next;

        printf("enter the number of terms :");

        scanf("%d",&n);

        printf("fibonacci series up to nth term :\n",n);

        for(int i = 1;i<=n;i++){
            printf("%d",a);
            next = a+b;
            a=b;
            b=next;
        }
        printf("\n");
        return 0;
    }
