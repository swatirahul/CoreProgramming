#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int length,i;
char str[10];
int flag=0;
clrscr();
printf("\n Enter a string:");
scanf("%s",str);
length=strlen(str);
for(i=0;i<length;i++)
{
printf("\n  %d comparing with %d |  %c ||  %c",i,(length-i-1), str[i],str[length-i-1]);
if(str[i]!=str[length-i-1])
{
flag = 1;
break;
}
}
if(flag)
{
printf("\n %s is not a palindrome ",str);
}
else{
printf("\n %s is a palindrome",str);
}
getch();
}