#include<stdio.h>
struct record
{
	int code;
	char name[40];
	int age;
	int fee;
	char add[100];
};
int main()
{
	struct record s[100],temp;
	int n,i=0,j=0;
	printf("\nenter how many number of students detail you want to enter");
	scanf("%d",&n);
	printf("\nenter the details");
	for(i=0;i<n;i++)
	{
		printf("\nenter the code of %d student ",i+1);
		scanf("%d",&s[i].code);
		printf("\nenter the name of %d student ",i+1);
		scanf("%s",&s[i].name);
		printf("\nenter the age of %d student ",i+1);
		scanf("%d",&s[i].age);
		printf("\nenter the fee of %d student ",i+1);
		scanf("%d",&s[i].fee);
		printf("\nenter the address of %d student ",i+1);
		scanf("%s",&s[i].add);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\nthe details of students in alphabetical order is\n");
	for(i=0;i<n;i++)
	{
		printf("name=%s\ncode=%d\nage=%d\nfee=%d\n",s[i].name,s[i].code,s[i].age,s[i].fee);
	}
	return 0;
}
