#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,i;
printf("Enter Number 1:-->");
scanf("%d",&a);
printf("Enter Number 2:-->");
scanf("%d",&b);
do
{
printf("\nEnter 1 for '+'");
printf("\nEnter 2 for '-'");
printf("\nEnter 3 for '*'");
printf("\nEnter 4 for '/'");
printf("\n press x for exit:");
scanf("%c",&i);
if(i == 'x')
exit(0);
printf("\nEnter Your choice:-->");
scanf("%d",&i);
switch(i)
{
case 1:
printf("\na+b = %d\n", a+b);
break;
case 2:
printf("\na-b =%d\n", a-b);
break;
case 3:
printf("\na*b = %d\n", a*b);
break;
case 4:
printf("\na/b = %d\n", a/b);
break;
default:
printf("\nEnter valid option\n");
}
}
while(i!=0);
}