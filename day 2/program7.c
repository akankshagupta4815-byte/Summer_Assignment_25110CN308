#include <stdio.h>
int main(){
    int number, digit ,product = 1;
    printf("enter a number:");
    scanf ("%d",&number);

    while(number!=0){
        digit = number % 10;
        product = product*digit;
        number = number/10;

    }
    printf("product of digit = %d",product);
    return 0;
}