#include<stdio.h>
struct record
{
	int id;
	char name[30];
	int salary;
};
int main()
{
	struct record s[5],temp;
	int i=0,j=0;
	printf("enter the records:\n");
	for(i=0;i<5;i++)
	{
		printf("enter the name of %d person ",i+1);
		scanf("%d",s[i].name); 
		printf("enter the id of %d person ",i+1);
		scanf("%d",&s[i].id);
		printf("enter the salary of %d person ",i+1);
		scanf("%d",&s[i].salary);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(s[i].salary<s[j].salary)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;	
			}
		}
	}
		printf("\nThe details of highest person salary is \n");
		printf("\nname=");
		puts(s[0].name);
		printf("\nid=%d\n salary=%d",s[0].id,s[0].salary);
	return 0;
}
