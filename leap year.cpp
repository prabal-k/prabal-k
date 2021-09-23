#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	((year%4==0)&&(year%100!=0))?printf("\nthe year is leap year"):(year%400==0)?printf("\nthe year is leap year"):printf("\nthe year is not leap year");
	return(0);
}
