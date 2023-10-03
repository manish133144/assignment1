#include <stdio.h>

int main() {
    char ch;
    printf("enter a string");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("uppercase string");
    else if(ch>=97 && ch<=122)
    printf("lower case string");
    else if(ch>=48 && ch<=57)
    printf("number");
    else 
    printf("symbol");


    return 0;
}