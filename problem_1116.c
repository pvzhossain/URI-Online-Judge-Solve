#include<stdio.h>
int main()
{
    int x,y,i,n;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d%d",&x,&y);
      if(x==0 && y!=0){
        printf("%.1f\n",(float)x/(float)y);
      }
      else if(x!=0 && y!=0){
        printf("%.1f\n",(float)x/(float)y);
      }
      else if(x!=0 && y==0){
        printf("divisao impossivel\n");
      }
    }
    return 0;
}
