#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j=0,count=0;
	char c[20],s[1000];
	FILE *p;
	p=fopen("C:\\CPROGRAM\\abc10.txt","r");
	if(p==NULL)
	{
		printf("\nFILE NOT FOUND");
		exit(0);
	}
	while(fgets(s,1000,p)!=NULL)
	{
		puts(s);
	}
	printf("\nENTER THE word WHICH YOU WANT TO SEARCH  ");
	gets(c);
	if(s==c)
	{
		count++;
	}
	printf("\ncount=%d",count);
	fclose(p);
	return 0;
	
}
