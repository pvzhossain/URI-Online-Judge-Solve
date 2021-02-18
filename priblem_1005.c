#include <stdio.h>

int main()
{
    float A,B,Avarage;
    scanf("%f%f", &A, &B);
    Avarage = (A*3.5 + B*7.5)/ (3.5 + 7.5);
    printf("MEDIA = %.5f\n", Avarage);

    return 0;
}
