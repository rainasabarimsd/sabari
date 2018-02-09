#include<stdio.h>
#include<conio.h>
int main()
{
   int fact=1;
    int j;
    int n;
    scanf("%d",&n);
    int sum;
    for(j=1;j<6;j++)
    {   sum=n*j;
        printf("%d*%d=%d",n,j,sum);
        printf("\n");
    }
}
