#include<stdio.h>
int main()
{
	int i=1,x,count=0,j,sum=0;
	printf("Enter the last range ");
	scanf("%d",&x);
	printf("\nList of prime number form 1 to %d is:\t",x);
	for(i=1;i<=x;i++)
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
	printf("\nThe sum is %d",sum);
}
