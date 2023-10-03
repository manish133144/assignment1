#include <stdio.h>

int main() {
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d number is even",n);
else
printf("%d number is odd",n);


    return 0;
}