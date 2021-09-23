#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
	int id;
	int salary;
}s[2];
int main()
{
	FILE *p;
	int i=0;
	char a[30];
	p=fopen("C:\\CPROGRAM\\FILE.txt","w+");
	if(p==NULL)
	{
		printf("\nERROR..file not found");
		exit(0);
	}
	printf("\nENTER THE RECORDS: ");
	for(i=0;i<2;i++)
	{
		printf("\nENTER THE ID OF %d PERSON ",i+1);
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("\nENTER THE salary ");
		scanf("%d",&s[i].salary);
		fflush(stdin);
	}
	for(i=0;i<2;i++)
	{
		fprintf(p,"\nid= %d\nsalary= %d  ",s[i].id,s[i].salary);
	}
	fclose(p);
	return 0;
	
}
