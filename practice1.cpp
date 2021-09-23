#include<stdio.h>
int main()
{
	int i=1,x,count=0;
	printf("enter a number ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			printf("\nthe number is prime number");
		}
		else
		printf("\nnot prime");
	
	return 0;
}
