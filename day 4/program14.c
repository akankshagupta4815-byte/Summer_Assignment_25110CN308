#include<stdio.h>
int main(){
    int n;
    int a=0;
    int b=1;
    int next;
    printf("enter the term number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        next = a+b;
        a=b;
        b=next;
    }
    printf("the %dth term is %d\n",n,(n<=0)?0:b);
    return 0;
    
    

    
}