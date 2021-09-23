#include<stdio.h>
int main()
{
	int x,i=1,count=0;
	printf("Enter a number. ");
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
		printf("\n%d prime number.",x);
	}
	else
		printf("\n%d not prime number.",x);
}
