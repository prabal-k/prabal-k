#include<stdio.h>
#include<stdlib.h>

struct emp
{
	int id ;
	char name[20];
};
int main()
{
	struct emp *p;
	int n,i=0;
	printf("\nenter how mnay  ro=eocrs do you want:");
	scanf("%d",&n);
	fflush(stdin);
	p=(struct emp*)malloc(n*sizeof(struct emp));
	if(p==NULL)
	{
		printf("\nmemory isnot allocated");
		exit(0);
	}
	else
	{
	printf("\nenter inputs:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&(p+i)->id);
		fflush(stdin);
		gets((p+i)->name);
		fflush(stdin);
	}
	}
	printf("\noutput is\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",(p+i)->id);
		puts((p+i)->name);
	}
	return 0;
}
