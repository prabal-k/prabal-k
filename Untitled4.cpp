#include<stdio.h>
struct record
{
	char name[30];
	int id; 
	int salary;
};
void rec(struct record[]);
int n;
int main()
{
	struct record a[30],temp;
	int i=0;
	printf("\nenter how many recors do yow want ");
	scanf("%d",&n);
	fflush(stdin);
	printf("\nEnter the records:");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of %d perosn ",i+1);
		gets(a[i].name);
		fflush(stdin);
		printf("\nEnter the id of %d person ",i+1);
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nEnter the salary of %d person ",i+1);
		scanf("%d",&a[i].salary);
		fflush(stdin);
	}
	rec(a);
	return 0;
}
void rec(struct record y[])
{
	int j=0,k=0;
	struct record temp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(y[j].salary>y[k].salary)
			{
				temp=y[j];
				y[j]=y[k];
				y[k]=temp;
			}
		}
	}
	printf("\n*****************************************************************************************************************");
	printf("\nThe details OF HIGHEST SALARY PERSON  are:");
	printf("\nname=%s",y[0].name);
	
	printf("\nid=%d\nsalary=%d",y[0].id,y[0].salary);
}
