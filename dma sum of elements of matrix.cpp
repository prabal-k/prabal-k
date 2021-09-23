#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i=0,j=0,n,sum=0;
	printf("enter how many numbers you want to enter ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nmemory isnt allocated");
		exit (0);
	}
	else
	printf("\nenter the numbers ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);	
	}
	printf("\nthe sum of elements of given array is ");
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("%d",sum);
	free(p);
	return 0;
	
}
