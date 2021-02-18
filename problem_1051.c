#include<stdio.h>
int main()
{
    float salary,tax,increase;
    scanf("%f",&salary);

    if(salary<=2000.00)
        printf("Isento\n");
    else{
        if(salary>2000.00 && salary<=3000.00){
            increase=salary-2000.00;
            tax=increase/100.00*8.00;
        }
        else if(salary>3000.00 && salary<=4500.00){
            increase=salary-3000.00;
            tax=increase/100.00*18.00+80.00;
        }
        else{
            increase=salary-4500.00;
            tax=increase/100.00*28.00+350.00;
        }
        printf("R$ %.2f\n",tax);
    }

    return 0;
}
