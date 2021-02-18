#include<stdio.h>
int main()
{
    float a,b,c,total,avg;
    int i,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%f%f%f",&a,&b,&c);
        total=a*2.0+b*3.0+c*5.0;
        avg=total/10.0;
        printf("%.1f\n",avg);
    }

    return 0;
}
