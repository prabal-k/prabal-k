#include<stdio.h>

struct emp
{
	char name[25];
	int id;
	int salary;
};


int main()
{
	struct emp s[10],temp;
	int i=0,j=0;
	printf("\n Enter data:");
	for(i=0;i<10;i++)
	{
		printf("Enter name of %d person\n",i+1);
		gets(s[i].name);
		printf("Enter id of %d person",i+1);
		scanf("%d",&s[i].id);
		printf("Enter salary of %d person",i+1);
		scanf("%d",&s[i].salary);
	}

	for(i=0;i<10;i++) 
	{
		for(j=i+1;j<10;j++) 
		{
			if(s[i].salary<s[j].salary)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}

	printf("\nThe details of highest salary person is:");
	printf("\n Name:");
	puts(s[0].name);
	printf("\n Id=%d",s[0].id);
	printf("\n salary=%d",s[0].salary);
	return 0;
}

















