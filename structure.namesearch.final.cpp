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
	struct record a[4],temp;
	int i=0,j=0,x;
	char b[40];
	printf("Enter the records:");
	for(i=0;i<4;i++)
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
	for(i=0;i<4;i++)
	{
		if(strcmp(a[i].name,b)==0)
		{
			x=1;
			printf("\n--------------------------------------------------------------------------------------------------------------");
			printf("\nThe details of person you searched is :\n");
			printf("\nName=%s\nId=%d\nsalary=%d\n",a[i].name,a[i].id,a[i].salary);
		
		}
	}
	  if(x!=1)
		{
		printf("\n................................................................................................................");
		printf("\nThe detail of person you  have searched isnot in our record... ");
		}
	
	return 0;
}
