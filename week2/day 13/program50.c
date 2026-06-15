#include<stdio.h>
int main(){
int n;
int i;
int sum = 0;
float average;
printf("enter the number of elements:");
scanf("%d", &n);
int arr[n];

printf("enter %d elements:\n",n);
for(i = 0; i < n;i++){
    printf("elements %d:", i+1);
    scanf("%d", &arr[i]);
    sum += arr[i];
}
average = (float)sum / n;
printf("\n sum of all elements = %d\n", sum);
printf("Average of all elements = %.2f\n",average);
return 0;
}