#include<stdio.h>
#include<conio.h>
in main()
{
 	int n,c=0;
	scanf("%d",&n);
	for(int i=0;i<10;i++)
	{
		if(n==i)
		{
			c++;
		}
	}
	if(c==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	return 0;
}
