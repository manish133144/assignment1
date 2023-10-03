90#include<stdio.h>
int main()
{
   int score;

   printf("Enter score( 0-100 ): ");
   scanf("%d",&score);

   if(score>=90 && score<=100)
     printf("Grade: A");

   else if(score>=80)
     printf("Grade: B");

   else if(score>=70)
     printf("Grade: C");

   else if(score>=60)
     printf("Grade: D");

   else if(score>=50)
     printf("Grade: E");

   else
     printf("Grade: F");

   return 0;
}