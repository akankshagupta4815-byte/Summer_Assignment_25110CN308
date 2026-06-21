#include<stdio.h>
int main(){
    char str[100];
    int length = 0;
    char *ptr;
    printf("Enter a string:");
    fgets(str,sizeof(str), stdin);

    ptr = str;

    while(*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;

    }
    printf("Length = %d\n",length);
    return 0;
}