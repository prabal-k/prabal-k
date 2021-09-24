#include<stdio.h>
#include<stdlib.h>
struct emp
{
	char name[30];
	int id;
	int marks;
};
int main()
{
	struct emp a[100];
	int i=0,n;
	FILE *p;
	p=fopen("C:\\CPROGRAM\\swornim.txt","w+");
	if(p==NULL)
	{
		printf("\nfile not found");
		exit(0);
	}
	printf("\nenter how many record do you want to keep ");
	scanf("%d",&n);
	fflush(stdin);
	printf("\nenter the records:\n");
	for(i=0;i<n;i++)
	{
		printf("\nenter name  ");
		gets(a[i].name);
		fflush(stdin);
		printf("\nenter id  ");
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nenter marks  ");
		scanf("%d",&a[i].marks);
		fflush(stdin);
	}
	fwrite(&a,sizeof(a),1,p);
	fclose(p);
	return 0;
}
