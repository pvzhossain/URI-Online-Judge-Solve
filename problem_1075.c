#include<stdio.h>
int main()
{
    long int n,i;
    scanf("%ld", &n);
    for(i=1; i<=10000; i++)
    {
        if(i%n==2)
        {
            printf("%d\n", i);
        }
    }

    return 0;

}
