#include <stdio.h>

int main()
{
    char JANNAT;
    double salary,sold,TOTAL;
    scanf("%s %lf %lf", &JANNAT, &salary, &sold);
    TOTAL = (salary + ((sold*15)/100));
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
