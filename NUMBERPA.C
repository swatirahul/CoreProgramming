#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,r,s=0;
clrscr();
printf("\n Enter a no");
scanf("%d",&n);
for(i=n;i>0;)
{
r=i%10;
s=s*10+r;
i=i/10;
}
if(s==n)
{
printf("\n %d Number is Palindrom",n);
}
else{
printf("\n %d Not Polindrom Number",n);
}
getch();
}
