#include<stdio.h>
int main()
{
    int i, f=1, num;  //we assume factorial is started with 1

    printf ("Enter a number:");
    scanf ("%d", &num);

    for (i=1; i <= num; i++)
        f=f*i;  //we assumed factorial is started with 1 because if we multiply anything with 0, it result 0
                //and 5!= 5*4! = 5*4*3*2*1

    printf ("So, the factorial of %d is %d:", num, f);
}
