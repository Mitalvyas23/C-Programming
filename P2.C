/*TOPIC = Menu driven program on two-dimensional array
  PROGRAMMER = Mital vyas
*/

#include<stdio.h>
#include<conio.h>

void main()
{
char a[5][20],s[6],o[6];
int i,found=0,nfound=0,l=0,choice=0;
clrscr();
printf("enter string in 2-dimensional character array : \n");
for(i=0;i<5;i++)
{
	printf("a[%d] = ",i);
	scanf("%s",a[i]);
}
printf("\nYOUR ELEMENTS IS :: \n");
for(i=0;i<5;i++)
{
	printf("a[%d] = %s\n",i,a[i]);
}
printf("\nPLEASE CHOICE ONE OPTION IN GIVEN LIST : \n");
printf("1 : SEARCH ELEMET \n");
printf("2 : FIND OCCURANCE OF ELEMENT \n");
printf("3 : FIND LENGTH OF EACH ELEMENT \n");
printf("\nENTER YOUR CHOICE : ");
scanf("%d",&choice);
switch(choice)
{
	case 1 :
	printf("please enter a element for search : \n");
	scanf("%s",s);
	for(i=0;i<5;i++)
	{
		if(strcmp(s,a[i])==0)
		{
		found++;
		l=i;
		}
		else
		{
		nfound++;
		}
	}
	if(found==1)
	{
	printf("the element is %s at location %d",s,l+1);
	}
	else
	{
	printf("the element is not found ");
	}
	break;

	case 2 :
	printf("WELCOME TO FIND OCCURENCE OF EACH ELEMENT : \n");
	printf("please enter the string to find their occurence : ");
	scanf("%s",o);
	for(i=0;i<5;i++)
	{
		if(strcmp(o,a[i])==0)
		{
		found++;
		//l=i;
		}
		else
		{
		nfound++;
		}
	}
	if(found>=1)
	{
	printf("the element occurence is : %d",found);
	}
	else
	{
	printf("the repeated element is not found");
	}
	break;

	case 3 :
	printf("\nWELCOME TO FIND ALL ELEMENTS LENGTH : \n");
	for(i=0;i<5;i++)
	{
		printf("%s = ",a[i]);
		printf("%d\n",strlen(a[i]));
	}
	break;

	default:
	printf("please enter number 1 to 3 ");
	break;
}
getch();
}
