#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	int i=0,lw=0,up=0;
	char a[40];
	p=fopen("C:\\CPROGRAM\\new.txt","r");
	while(fgets(a,40,p)!=NULL)
	{
		puts(a);
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			up++;
		}
		else if(a[i]>=97&&a[i]<=122)
		{
			lw++;
		}
	}
	printf("\nTHE NUMBER OF LOWER CASE IS %d",lw);
	printf("\nTHE NUMBER OF UPPER CASE IS %d",up);
	fclose(p);
	return 0;
	
}
