#include <stdio.h>

int main ()
{
    int a,b,c,d;
    double x,y,result;
    scanf("%d%d%lf", &a, &b, &x);
    scanf("%d%d%lf", &c, &d, &y);
    result = ((b*x) + (d*y));
    printf("VALOR A PAGAR: R$ %.2lf\n", result);

    return 0;
}
