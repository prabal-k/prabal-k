#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	int i=0,lw=0,up=0;
	char a[40];
	p=fopen("C:\\CPROGRAM\\new.txt","r");
	if(fgets(a,40,p)!=NULL)
	{
		puts(a);
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			up++;
		}
		if(a[i]>='a'&&a[i]<='z')
		{
			lw++;
		}
	}
	printf("\nTHE NUMBER OF LOWER CASE IS %d",lw);
	printf("\nTHE NUMBER OF UPPER CASE IS %d",up);
	fclose(p);
	return 0;
	
}
