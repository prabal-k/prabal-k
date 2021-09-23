#include<stdio.h>
int main()
{
	int i=0,n,sum=0,j,count=0;
	printf("\nEnter the last range to find prime number: ");
	scanf("%d",&n);
	printf("\nList of prime number from 1 to %d is:\n",n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d ",i);
			sum=sum+i;
	}
		}

		printf("\nThe sum  of prime number from 1 to %d is %d",n,sum);
}
