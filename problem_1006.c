#include <stdio.h>

int main()
{
    float A,B,C,Avarage;
    scanf("%f%f%f", &A, &B, &C);
    Avarage = (A*2 + B*3 + C*5)/(2 + 3 + 5);
    printf("MEDIA = %.1f\n", Avarage);
     return 0;
}
