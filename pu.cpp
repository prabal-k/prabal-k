#include<stdio.h>
#include<string.h>
struct emp
{
	char name[25];
	int id;
	int salary;
	char department[30];
};
int main()
{
	struct emp s[30],temp;
	int i=0,j=0,n=0,x=0;
	printf("Enter the number of records you want to store: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter the details of the employees:\n");
	for(i=0;i<n;i++)
	{
		printf("\n***********************************\n");
		printf("Enter name of %d person: ",i+1);
		fgets(s[i].name,25,stdin);
		fflush(stdin);
		printf("Enter id of %d person: ",i+1);
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("Enter salary of %d person: ",i+1);
		scanf("%d",&s[i].salary);
		fflush(stdin);
		printf("Enter department of %d person: ",i+1);
		fgets(s[i].department,30,stdin);
		fflush(stdin);
	}
	for(i=0;i<n;i++) 
	{
		for(j=i+1;j<n;j++) 
		{
			if(s[i].salary<s[j].salary)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\n***********************************\n");
	printf("\nThe details of highest salary person is:\n ");
	printf("\nName: %s",s[0].name);
	printf("\nId = %d",s[0].id);
	printf("\nSalary = %d",s[0].salary);
	printf("\nDepartment: %s",s[0].department);
	printf("\n***********************************\n");
	printf("\n \nThe details of lowest salary person is:\n ");
	printf("\nName: %s",s[n-1].name);
	printf("\nId = %d",s[n-1].id);
	printf("\nSalary = %d",s[n-1].salary);
	printf("\nDepartment: %s",s[n-1].department);
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].department,"Computer")==0)
		{
			x=1;
			printf("\n***********************************\n");
			printf("\nThe details of person in computer department is:\n ");
			printf("\nName: %s", s[i].name);
			printf("\nId = %d",s[i].id);
			printf("\nSalary = %d",s[i].salary);
			printf("\nDepartment: %s",s[i].department);
		}
	}
	if(x!=1)
	{
		printf("\nThere is no person in Computer Department!");
	}
	return 0;
}
