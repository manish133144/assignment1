# include <stdio.h>
int main() {
    int n,rem,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(;n>0;n=n/10){
        rem=n%10;
        sum=sum*10+rem;
        
    }
    printf("reverse of a number is %d",sum);
    
    return 0;
}