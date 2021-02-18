#include<stdio.h>
int main ()
{
    double x,y,z;
    scanf("%lf %lf %lf", &x, &y, &z);

    if(x+y>z && y+z>x && x+z>y){
        printf("Perimetro = %.1lf\n", x+y+z);
    }
    else{
        printf("Area = %.1lf\n", .5*(x+y)*z);
    }

    return 0;
}
