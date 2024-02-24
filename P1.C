/*TOPIC = Menu driven program on two-dimensional array
  PROGRAMMER = Mital vyas
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],d[2][2],i,j,choice,k;
clrscr();
printf("enter elemets in first matrix : \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("a[%d][%d] = ",i,j);
	scanf("%d",&a[i][j]);
	}
}
printf("enter elemets in second matrix : \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("b[%d][%d] = ",i,j);
	scanf("%d",&b[i][j]);
	}
}
printf("choose one option from given list : \n");
printf("1 : ADDITION\n");
printf("2 : SUBSTRACTION\n");
printf("3 : MULTIPLICATION\n");
printf("4 : TRANSPOSE OF MATRIX\n");
printf("enter your choise : ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("your matrix after addition : \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("|%d| + ",a[i][j]);
		printf("|%d| = ",b[i][j]);
		printf("|%d|\t",c[i][j]);
		}
		printf("\n");
	}
	break;

	case 2:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("your matrix after substraction : \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("|%d| - ",a[i][j]);
		printf("|%d| = ",b[i][j]);
		printf("|%d|\t",c[i][j]);
		}
		printf("\n");
	}
	break;

	case 3:
	printf("\n----------------------------------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j]=0;
		for(k=0;k<2;k++)
		{
		printf("[%d x %d = ",a[i][k],b[k][j]);
		c[i][j] += a[i][k] * b[k][j];
		printf("%d ] ",a[i][k]*b[k][j]);
		if(k==1)
		{
		printf("= %d\n",c[i][j]);
		}
		else
		{
		printf(" + ");
		}
		}
		}
	}
	printf("--------------------------------------------\n");
	printf("\nyour matrix after addition : \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("|%d|\t",c[i][j]);
		}
		printf("\n");
	}
	break;

	case 4:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[j][i] = a[i][j];
		d[j][i] = b[i][j];
		}
	}
	printf("your matrix after transpose : \n");
	printf("FIRST MATRIX = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("|%d|\t",c[i][j]);
		}
		printf("\n");
	}
	printf("SECOND MATRIX = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("|%d|\t",d[i][j]);
		}
		printf("\n");
	}
	break;

	default:
	printf("please enter number between 1 to 4");
	break;
}
getch();
}
