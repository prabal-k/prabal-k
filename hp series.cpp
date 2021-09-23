#include<stdio.h>
#include<conio.h>
int main()
{
		int n,i=1;
		float sum=0;
		printf("\nenter the value of n\t");
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
		printf("\nthe sum of hp is %f",sum);
		return(0);
}
