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
	struct emp a[3];
	int i=0;
	FILE *p;
	p=fopen("C:\\CPROGRAM\\AAAA2z.txt","w+");
	if(p==NULL)
	{
		printf("\nfile missing");
		exit(0);
	}
	printf("\nenter the records:\n");
	for(i=0;i<2;i++)
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
