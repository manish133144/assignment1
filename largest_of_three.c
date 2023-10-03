# include <stdio.h>
int main(){
    int a,b,c;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter b number");
    scanf("%d",&b);
    printf("enter c number");
    scanf("%d",&c);
    if(a>=b && a>=c)
    printf("%d is greatest ",a);
else if(b>=a && b>=c)
    printf("%d is greatest ",b);
else if(c>=a && c>=b)
    printf("%d is greatest ",c);
    
    
    return 0;
}