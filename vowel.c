#include <stdio.h>

int main() {
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='i'||ch=='O'||ch=='u'){ 
        printf("it is vowel");
    }
    else
    printf("consonent");
    return 0;
}