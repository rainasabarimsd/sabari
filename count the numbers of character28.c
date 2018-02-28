#include<stdio.h>
#include<conio.h>
int main()
{ 
 char str[30];
int i=0,count=0;
  printf("enter the string");
  scanf("%s",&str);
while(str[i]!='\0')
{
if(!(str[i]==" "))
{
++count;
}
++i;
}
printf("no of characters is %d ",count);
getch();
return 0; 
}
