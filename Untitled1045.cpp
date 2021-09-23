#include<stdio.h>
int main()
{
	int year;
	printf("wnter a year ");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("\nleap year");
	}
	else
	{
		printf("\nnot leap year");
	}
	return 0;
}
