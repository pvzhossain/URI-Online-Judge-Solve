#include<stdio.h>
int main()
{
    long long int n,i,x,count=0,sum=0;

    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld", &x);
        if(x>=10 && x<=20)
        {
            count++;
        }
        else
        {
            sum++;
        }
    }
    printf("%lld in\n", count);
    printf("%lld out\n", sum);

    return 0;
}
