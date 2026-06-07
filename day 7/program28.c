#include<stdio.h>

int reverseNum (int n , int rev);

int main(){
    printf("reverse of digit is %d",reverseNum(1234,0));

    return 0;
}


int reverseNum (int n, int rev){

    if(n == 0){
        return rev;
    }
    int revNm1 = rev *10 +(n%10);

    int revN = reverseNum(n / 10, revNm1);
    return revN;
}