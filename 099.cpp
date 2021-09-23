#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	FILE *p;
	p=fopen("C:\\CPROGRAM\\PRABAL.TXT","r");
	if(p=NULL)
	{
		printf("\nfile not found.");
		exit(0);
	}
	else
	{
		printf("\nfile is found");
	}
	return 0;
}
