#include <stdio.h>

int main() {
    int c,f;
    printf("enter temp in celcius");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("your temp in ferenheight is %d",f);

    return 0;
}