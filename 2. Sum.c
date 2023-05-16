#include<stdio.h>
int main()
{
    int num1, num2, sum; //introducing variable

    printf ("Enter two integer numbers:"); //to show the mentioned text as output
    scanf ("%d %d", &num1, &num2); //to take input of two numbert

    sum = num1 + num2;

    printf ("The sum of %d and %d is: %d", num1, num2, sum); //showing the result of sum
    return 0;
}
