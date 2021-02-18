#include<stdio.h>
int main()
{
    int I,J,n=7,m=5;
    for(I=1 ; I<=9 ; I=I+2)
    {
        for(J=n ; J>=m ; J--)
        {
            printf("I=%d J=%d\n",I,J);
        }
        n=n+2;
        m=m+2;
    }

    return 0;
}
