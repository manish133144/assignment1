#include <stdio.h>

int main() {
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("%c it is vowel of lower case",ch);
    else if(ch=='A'||ch=='E'||ch=='i'||ch=='O'||ch=='u')
    printf("%c it is vowel of upper case",ch);
    else
    printf("consonent");
    return 0;
}