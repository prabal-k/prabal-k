#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,a[30],i=0,n,j=0,b;
	p=a;
	printf("\nEnter the size of array ");
	scanf("%d",&n);
	printf("\nEnter %d elements in array.",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nEnter the number which you want to search ");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(b==*(p+i))
		{
			j=1;
			break;
		}
		 if(j==1)
		{
			printf("\nfound");
			
		}
		else
		{
			printf("\nNOT FOUND");
		}
	}
	
	return 0;
	
}
