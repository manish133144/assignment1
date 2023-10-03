#include <stdio.h>

int main() {
    int n,sum=0,i;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    printf("your sum of n natural number is %d",sum);
    return 0;
}