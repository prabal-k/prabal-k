#include<stdio.h>
struct record
{
	int id;
	char name[30];
	int salary[];
	char dep[30];
	
};
int main()
{
	struct record temp,a[4];
	int i=0,j=0;
	printf("\nenter the records:");
	for(i=0;i<4;i++)
	{
		printf("\nenter the name of %d person ",i+1);
		gets(a[i].name);
		fflush(stdin);
		printf("\nenter the id of %d person ",i+1);
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nenter the salart of %d person ",i+1);
		scanf("%d",&a[i].salary);
		fflush(stdin);
		printf("\nenter the department of %d person ",i+1);
		gets(a[i].dep);
		fflush(stdin);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i].salary<a[j].salary)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n----------------------------------------------------------------------");
	printf("\nThe details of highest salary person is:");
	printf("\nname=");
	puts(a[0].name);
	printf("\nid=%d\nsalary=%d",a[0].id,a[0].salary);
	printf("\ndepartment=");
	puts(a[0].dep);
	return 0;
}
