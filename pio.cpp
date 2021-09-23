#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x[30]="hello guys how are you all?";
	FILE *p;
	p=fopen("C:\\CPROGRAM\\PRABAL.TXT","w+");
	if(p==NULL)
	{
		printf("\nfile not found.");
		exit(0);
	}
	fputs(x,p);
	fclose(p);
	return 0;
}
