#include<stdio.h>
struct emp
{
	char name[20];
	int roll;
	float percent;
};
int main()
{
	int i=0,j=0;
	struct emp s[3],temp;
	printf("\nenter details\n");
	for(i=0;i<3;i++)
	{
		gets(s[i].name);
		fflush(stdin);
		scanf("%d",&s[i].roll);
		fflush(stdin);
		scanf("%f",&s[i].percent);
		fflush(stdin);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i].percent<s[j].percent)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\ndetail is\n");
	printf("\nname=%s  roll=%d   percent marks=%.2f",s[0].name,s[0].roll,s[0].percent);
}
