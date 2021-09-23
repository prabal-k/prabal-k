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
	int i=0;
	struct emp a[3];
	FILE *p;
	p=fopen("C:\\CPROGRAM\\AAAA2z.txt","r");
	if(p==NULL)
	{
		printf("\nfile not found");
		exit(0);
	}
	printf("\nname\t\tid\tmarks\n");
	while(fread(&a,sizeof(a),1,p)>0)
	{
		printf("\n%s\t%d\t%d\n",a[i].name,a[i].id,a[i].marks);
	}
	fclose(p);
	return 0;
}
