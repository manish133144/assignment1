#include <stdio.h>

int main() {
    int r,a,p;
    float pi=3.14;
    printf("enter radius");
    scanf("%d",&r);
    a=pi*r*r;
    printf("your area is %d\n",a);
    p=2*pi*r;
    printf("your perimeter is: %d",p);
    return 0;
}