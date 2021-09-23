#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	printf("\nEnter the nth term ");
	scanf("%d",&n);
	printf("\neven natural number upto %d term is: ",n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
			sum=sum+i;
		}
	}
	return 0;
}
