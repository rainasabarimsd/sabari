#include<stdio.h>
#include<conio.h.>
int main()
{
 	int n,i,count=0;
	printf("ENTER THE INPUT SENTENCE:\n");
	gets(a);
	n=strlen(a);
	printf("\nTHE LENGTH OF STRING IS %d",n);
	for(i=0;i<n;i++)
	{
		if(isspace(a[i]))
		{
			count++;
		}
	}
	printf("\nTHE NO.OF.SPACE IN THE GIVEN SENTENCE ARE %d",count);
}
