#include <stdio.h>

int main()
{
    int num,hour;
    float perhour,result;
    scanf("%d %d %f", &num, &hour, &perhour);
    result = hour*perhour;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", result);

    return 0;
}
