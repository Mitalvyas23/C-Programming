/*TOPIC = Number is prime or not using UDF
PROGRAMMER = Mital vyas
*/

#include<stdio.h>
#include<conio.h>

int prime(int n);

void main()
{
int n,p=0;
clrscr();
printf("enter a number : ");
scanf("%d",&n);
p = prime(n);
if(p==0)
{
printf("number is prime");
}
else
{
printf("number is not prime");
}
getch();
}

int prime(int n)
{
int count=0,i;
if(n==1 || n==2)
{
count=1;
}
for(i=2;i<=n/2;++i)
{
	if(n % i == 0)
	{
	count=1;
	break;
	}
}
return count;
}
