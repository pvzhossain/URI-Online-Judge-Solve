#include<stdio.h>
int main()
{
    long int i,n,x;
    scanf("%ld", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%ld", &x);

        if(x<0 && x%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(x>0 && x%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if(x%2==1)
        {
            printf("ODD POSITIVE\n");
        }
        if(x%2==-1)
        {
            printf("ODD NEGATIVE\n");
        }
        if(x==0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}
