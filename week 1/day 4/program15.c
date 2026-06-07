#include<stdio.h>
int main(){
int n;
int sum = 0;
int digit;
int temp ;
printf("enter the number:");
scanf("%d",&n);
temp =n;
while(n!=0){
    digit = n%10;
    sum = sum +digit*digit*digit;
    n =n/10;
}
if(sum==temp){
    printf("number is armstrong number\n ");
}
else{
  printf("number is  not armstrong number\n ");
}
return 0;

}

