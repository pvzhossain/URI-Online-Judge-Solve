#include<stdio.h>
int main()
{
    double i,a=1,x,sum=0;

    for(i=1; i<=100; i++)
    {
        x=1/i;
        sum+=x;
    }
    printf("%.2lf\n", sum);

    return 0;
}
