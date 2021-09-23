#include<stdio.h>
int prime(int);
int main()
{
	int x,result;
	printf("enter a number\t");
	scanf("%d",&x);
	result=prime(x);
	if(result==0)
	{
		printf("\nthe given num is prime");
	}
	else
	{
		printf("\nthe given num is not prime number");
	}
	return(0);
}
int prime(int y)
{
	int i=1,count=0;
	for(i=1;i<=y;i++)
	{
		if(y%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
