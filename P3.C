#include<stdio.h>
#include<conio.h>

struct employee
{
int empid;
char empname[20];
char qualification[20];
long int empsalary;
};

void main()
{
char course[6] = "MCA";
struct employee s[5];
int i;
clrscr();
printf("ENTER FIVE MEMBERS IN EMPLOYEE STRUCTURE : \n");
for(i=0;i<5;i++)
{
	printf("---------------------------------\n");
	printf("EMPID = ");
	scanf("%d",&s[i].empid);
	printf("EMPNAME = ");
	scanf("%s",s[i].empname);
	printf("QUALIFICATION = ");
	scanf("%s",s[i].qualification);
	printf("EMPSALARY = ");
	scanf("%ld",&s[i].empsalary);
}

printf("\nFIVE EMPLOYEE MEMBER IS : \n");
printf("\nEMP1 :   \t EMP2 :   \t EMP3 :   \t EMP4 :   \t EMP5 : ");
printf("\n==============================================================================\n");
for(i=0;i<5;i++)
{
	printf("EMPID = %d\t",s[i].empid);
}
for(i=0;i<5;i++)
{
	printf("EMPNAME = %s\t",s[i].empname);
}
for(i=0;i<5;i++)
{
	printf("QUALI. = %s\t",s[i].qualification);
}
for(i=0;i<5;i++)
{
	printf("SALARY= %ld\t",s[i].empsalary);
}
printf("\nEMPLOYEE WHOSE QUALIFICATION = MCA AND SALARY > 50000 ARE : \n");
for(i=0;i<5;i++)
{
if((strcmp(s[i].qualification,course)==0) && s[i].empsalary > 50000)
{
	printf("\nEMPID = %d\n",s[i].empid);
	printf("EMPNAME = %s\n",s[i].empname);
	printf("QUALIFICATION = %s\n",s[i].qualification);
	printf("EMPSALARY = %ld\n",s[i].empsalary);
}
}
getch();
}