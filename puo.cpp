#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	int i=0,lw=0,up=0;
	char a[40],b[30];
	p=fopen("C:\\CPROGRAM\\new.txt","r");
	if(p=NULL)
	{
		printf("\nFILE COULD NOT BE OPENED");
		exit(0);
	}
	fclose(p);
	printf("\nenter a sentence  ");
	gets(b);
	while(fgets(b,30,p)!=NULL)
	{
		puts(a);
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>=65&&b[i]<=90)
		{
			up++;
		}
		else
		{
			lw++;
		}
	}
	printf("\nTHE NUMBER OF LOWER CASE IS %d",lw);
	printf("\nTHE NUMBER OF UPPER CASE IS %d",up);
	return 0;
	
}
