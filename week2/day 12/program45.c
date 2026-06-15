#include<stdio.h>
int palindrome(int n)
{
    int rev = 0; 
    int temp = n;
    while(n != 0){
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    if(temp == rev){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(palindrome(n)){
        printf("Palindrome Number");
    }
    else{
        printf("Not a palindrome Number");
    }
    return 0;
}