#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,a[20],i=0,n,b,j,x;
	p=&a[0];
	printf("\nenter the size of array");
	scanf("%d",&n);
	printf("\nenter the %d elements at arry ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nenter the number which you want to search: ");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		x=0;
		if(*(p+i)==b)
		{
			x=1;
			printf("\n%d is found at %d position",b,i+1);
			exit(0);
		}
	}
		 if(x==0)
		{
			printf("\n%d not found",b);
		}
	return 0;
}
	
