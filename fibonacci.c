#include<stdio.h>
intmain() 
{
    inti=0,n=0,a,m=0,sum;
    printf("What is the range:");
    scanf("%d",&a);
    do
    {
        sum=i+n;
        printf("%d ",sum);
        i=n;
        if (m==0)
        {
            n=n+1;
            printf("%d ",n);
            m=m+1;
        }
        else
        {
            n=sum;
            m=m+1;
        
        }
    } 
    while (m<(a-1));
    return0;
}