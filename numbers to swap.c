#include<stdio.h>
#include<conio.h>
int main()
{
 	int x,y,tem;
	scanf("%d\t%d",&x,&y);
	tem=x;
	x=y;
	y=tem;
	printf("%d\t%d",x,y);
	return 0;
}
 
