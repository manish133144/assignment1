#include <stdio.h>

int main(){
    int year;
    printf("enter year");
    scanf("%d",&year);
    if(year%4==0)
    printf("you have entered %d year is a leap year",year);
else
printf("you have entered %d yera is not a leap year because it is not divisible by 4",year);

    return 0;
}