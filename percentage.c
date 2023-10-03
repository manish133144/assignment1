#include <stdio.h>

int main() {
    int s1,s2,s3,s4,s5,s,p;
    printf("enter subject marks");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    s=s1+s2+s3+s4+s5;
    printf("total marks =%d",s);
    p=s/500*100;
    printf("your percentage is : %d",p);

    return 0;
}