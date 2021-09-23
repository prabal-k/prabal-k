#include<stdio.h>
int main()
{
	int x,y,i=0,j=0,sum=0,count=0;
	printf("\nEnter the range to find prime number: ");
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
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
	printf("\nsum=%d",sum);
	
}
