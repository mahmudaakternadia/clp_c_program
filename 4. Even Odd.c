#include<stdio.h>

int main()
{
   int num;

   printf ("Enter an integer number:");
   scanf ("%d", &num);


   if (num % 2 == 0) // % means remainder
       printf ("%d is Even Number", num);

    else
        printf("%d is Odd Number", num);


    return 0;

}
