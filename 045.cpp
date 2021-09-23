#include<stdio.h>
#include<conio.h>
int main()
{
	char flag;
	printf("enter the character:\t");
	scanf("%c",&flag);
	if(flag>=65 && flag<=90)
	{
		printf("\n%c is upper case",flag);
	}
	else if(flag>=97 && flag<=122)
	{
	printf("\n%c is lower case",flag);
	}
	return(0);
	
	
}
