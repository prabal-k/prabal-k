#include<stdio.h>
#include<string.h>
struct emp
{
	char name[30];
	int id;
	char dep[20];
};
int main()
{
	struct emp a[100],temp;
	int i=0,j=0,x,n;
	char b[14]="computer";
	printf("\nEnter the number of  records you want to enter");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of %d person ",i+1);
		gets(a[i].name);
		fflush(stdin);
		printf("\nEnter the id of %d person",i+1);
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nEnter the department of %d person ",i+1);
		gets(a[i].dep);
		fflush(stdin);
	}
	printf("\nreslut is\n");
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].dep,b)==0)
		{
			x=1;
			printf("\nname=%s\nid=%d\ndep=%s",a[i].name,a[i].id,a[i].dep);
		}
	}
		else if(x!=1)
		{
			printf("\nthere is no person in computer department.");
		}
	
	return 0;
}
