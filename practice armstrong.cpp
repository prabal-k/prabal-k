#include<stdio.h>
int main()
{
	int x,sum=0,rem,y;
	printf("\nEnter a number ");
	scanf("%d",&x);
	y=x;
	while(x!=0)
	{
		rem=x%10;
		sum=sum+rem*rem*rem;
		x=x/10;
	}
	if(sum==y)
	{
		printf("\nARMSTRONG NUMBER");
	}
	else
	{
		printf("\nnot armstrong number");
	}
	return 0;
	
}
