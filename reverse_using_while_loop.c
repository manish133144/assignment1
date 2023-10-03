# include <stdio.h>
int main(){
    int n,rem,sum=0,num;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("reverse of a number is %d",sum);
    if(num==sum)
    printf("\npalindrome  number");
else
printf("the no is not a palindrome");

    
    return 0;
}