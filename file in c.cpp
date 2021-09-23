#include<stdio.h>
#include<string.h>
struct emp
{
	int id;
	char name[20];
	int salary;
	char dep[25];
};
int main()
{
	int i=0,j=0;
	struct emp s[4],temp;
	char a[15]="computer";
	printf("\nenter the details");
	for(i=0;i<3;i++)
	{
		printf("\nenter the id of %d person ",i+1);
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("\nenter the name of %d person ",i+1);
		gets(s[i].name);
		fflush(stdin);
		printf("\nenter the salary of %d person ",i+1);
		scanf("%d",&s[i].salary);
		fflush(stdin);
		printf("\nenter the department ");
		gets(s[i].dep);
		fflush(stdin);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i].salary<s[j].salary)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
				}
		}
	}
	printf("\nTHE details of person working in computer department is \n"); 
		for(i=0;i<3;i++)
	{
			if(strcmp(s[i].dep,"computer")==0)
			{
				printf("name=%s\tid=%d\tsalary=%d\tdepartment=%s",s[i].name,s[i].id,s[i].salary,s[i].dep);	
			}
		
	}
	
	printf("\nThe details of highest salary person is :\n");
	printf("name=%s\tid=%d\tsalary=%d\tdepartment=%s",s[0].name,s[0].id,s[0].salary,s[0].dep);
	printf("\nThe details of lowest salary person is :\n");
	printf("name=%s\tid=%d\tsalary=%d\tdepartment=%s",s[2].name,s[2].id,s[2].salary,s[2].dep);
	

	
	return 0;
	
}
