#include <stdio.h>

int main() {
    int si,p,r,t;
    printf("enetr principal,rate, time");
    scanf("%d %d %d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("your simple interest is= %d",si);
    return 0;
}
