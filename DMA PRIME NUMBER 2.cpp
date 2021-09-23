#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i=0,j=0,x=1,count=0,count1=0;
	printf("enter the size of array");
	scanf("%d",&n);
	p=(int *)malloc(n *sizeof(int));
	if(p==NULL)
	{
		printf("\nmemmory isnt allocated");
		exit (0);
	}
	else
	{
		printf("\nenter %d numbers ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			if(*(p+i)%2==0)
			{
				count++;
				count1++;
			}
		}
		if(count==2)
		{
			printf("\nthe number of prime number is %d",count1);
		}
	}
	return 0;
}
