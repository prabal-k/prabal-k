#include<stdio.h>
#include<stdlib.h>
struct emp
{
	char a[30];
	int id;
	int salary;
};
int main()
{
	FILE *p;
	struct emp s[2];
	int i=0,j=0;
	p=fopen("C:\\CPROGRAM\\ABC.TXT","W+");
	if(p==NULL)
	{
		printf("\nFILE NOT FOUND");
		exit(0);
	}
	for(i=0;i<2;i++)
	{
		printf("\nenter the name of %d person",i+1);
		gets(s[i].a);
		fflush(stdin);
		printf("\nenter the id ");
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("\nenter the salary");
		scanf("%d",&s[i].salary);
		fflush(stdin);
	}
	fwrite(s,sizeof(s),1,p);
	fclose(p);
	return 0;
}
