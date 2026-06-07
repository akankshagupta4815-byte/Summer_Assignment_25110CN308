#include<stdio.h>

int sumdigit(int n);

int main(){
    printf("sum of digits is %d",sumdigit(1234));
    return 0;
}


int sumdigit(int n){
    if (n == 0){
        return 0;

    }
    int sumNm1 = sumdigit(n/10);
    int sumN = sumNm1 + (n%10);
    return sumN;
}