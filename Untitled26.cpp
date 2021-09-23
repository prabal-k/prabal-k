#include<stdio.h>
#include<string.h>
struct record 
{
	char name[40];
	int id;
	int salary;
};
int main()
{
	struct record a[2],temp;
	int i=0,j=0;
	char b[40];
	printf("Enter the records:");
	for(i=0;i<2;i++)
	{
		printf("\nEnter the name of %d person  ",i+1);
		gets(a[i].name);
		fflush(stdin);
			strlwr(a[i].name);
		printf("\nEnter the id of %d person  ",i+1);
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nEnter the salary of %d person  ",i+1);
		scanf("%d",&a[i].salary);
		fflush(stdin);
	}
	printf("\n**************************************************************************************************************");
	printf("\nEnter the name of person whose details you want to search\t");
	gets(b);
	strlwr(b);
	for(i=0;i<2;i++)
	{
		if(strcmp(a[i].name,b)==0)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	if(strcmp(a[0].name,b)==0)
	{
		printf("\n--------------------------------------------------------------------------------------------------------------");
		printf("\nThe details of person you searche is :\n");
		printf("\nName=%s\nId=%d\nsalary=%d\n",a[0].name,a[0].id,a[0].salary);
	}
	else
	{
		printf("\n................................................................................................................");
		printf("\nThe detail of person you  have searched isnot in our record... ");
	}
	
	return 0;
}
