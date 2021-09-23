#include<stdio.h>
int main()
{
	int x,sum=0;
	printf("Enter a number: ");
	scanf("%d",&x);
	sum=x%10;
	while(x>9)
	{
		x=x/10;
	}
	sum=sum+x;
	printf("sum=%d",sum);
	return 0;
}
