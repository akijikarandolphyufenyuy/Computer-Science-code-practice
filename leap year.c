#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	label:
	printf("enter a year:");
	scanf("%d",&year);
	if(year%4==0 && year%400==0 || year%100 !=0)
	{
	printf("The year you entered is a leap year bro");
	}
	else
	{
	printf("sorry bro\n the year you entered is not a leap year\n");
    goto label;
	}
	return 0;
}
