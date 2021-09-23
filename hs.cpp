#include<stdio.h>
int main()
{
	int i=0,n;
	float sum=0.0;
	printf("Enter the nth term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("1/%d + ",i);
			sum=sum+1/(float)(i);
		}
		if(i==n)
		{
			printf("1/%d",i);
			sum=sum+1/(float)(i);
			}
		}
		printf("\nThe sum of hs upto %d term is %d",n,sum);
		return 0;
}

