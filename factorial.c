# include <stdio.h>
int main(){
    int n=0,f=1,i=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
        
    }
    printf("your factorial is : %d",f);
}