#include<stdio.h>
#include<stdlib.h>
struct temperature
{
	int temp;
};
int main()
{
	int n,i=0,j=0,b;
	struct temperature *p;
	struct temperature a[100];
	printf("\nEnter the n temperature\t");
	scanf("%d",&n);
	fflush(stdin);
	p=(struct temperature*)malloc(n*sizeof(struct temperature));
	if(p==NULL)
	{
		printf("\nMemory isnot allocated");
		exit(0);
	}
	printf("\nEnter the temperatures\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&(p+i)->temp);
		fflush(stdin);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((p+i)->temp > (p+j)->temp)
			{
				b=(p+i)->temp;
				(p+i)->temp=(p+j)->temp;
				(p+j)->temp=b;
				}
		}
	}
	printf("\nThe entered temperature in ascending order is :\n");
	for(i=0;i<n;i++)
	{
		printf("  %d  ",(p+i)->temp);
	}
	free(p);
	return 0;
	
}
