#include<stdio.h>
#include<conio.h>
int main()
{
 int n,i,x;
	char s[1000];
	gets(s);
	n=strlen(s);

		x=n/2;
		s[x]='*';
	

	puts(s);
}
