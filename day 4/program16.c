#include<stdio.h>
int main (){
    int start,end,i,temp,digit,sum ;

    printf("enter the starting number of the range:");

    scanf("%d",&start);

    printf("enter the ending number of the range :");

    scanf("%d",&end);

    printf("Armstrong numbers between %d and %d are:\n",start,end);

    for(i = start; i <= end ;i++){
        temp = i;
        sum = 0;

        while(temp != 0){
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }
        if (sum == i){
            printf(" %d ",i);

        }
        printf("\n");
        return 0;

        
        
    
    }
}