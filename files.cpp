#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *p;
	p=fopen("C:\\CPROGRAM\\swornimhancy.TXT","w+");
	if (p==NULL)
	{
		printf("\nFILE NOT FOUND");
		exit(0);
	}
	else
	{
		printf("\nFILE IS FOUND");
	}
	fclose(p);
	return 0;
}
