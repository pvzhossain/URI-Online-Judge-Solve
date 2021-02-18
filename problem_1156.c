#include <stdio.h>
int main()
{
    double i,a=1,b, Sum=0;
    for(i=1; i<=39; i+=2)
    {
        b=i/a;
        Sum+=b;
        a*=2;
    }
    printf("%.2lf\n",Sum);
    return 0;
}
