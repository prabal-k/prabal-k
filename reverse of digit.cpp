#include<stdio.h>
int main()
{
	int x,rem,sum=0,count=0;
	printf("\nenter number");
	scanf("%d",&x);
		printf("\nreverse digit\t");
	while(x!=0)
	{
		rem=x%10;
		count++;
		printf(" %d ",rem);
		x=x/10;
	}
	
	printf("\ncount=%d",count);
}
