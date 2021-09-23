#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i=0,j=0;
	printf("Enter how many numbers do you want");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nMemory isnot allowed");
		exit(0);
	}
	printf("\nenter the numbers ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nenter which number do you want to search ");
	scanf("%d",&j);
	if(j==*(p+i))
	{
		printf("\nThe number %d you entered is stored here.",j);
	}

	else
		{
			printf("\nThe number %d you enter doesnt belong here.",j);
		}
	free(p);
	return 0;
}
