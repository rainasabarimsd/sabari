#include<stdio.h>
#include<conio.h>
int main()
{ 
char str[100];
	int i;
	cin.getline(str,100);
	for(i=0;str[i]!=0;i++)
	{
	    cout<<str[i]<<" ";
	}
	return 0;
}
