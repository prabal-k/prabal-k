#include<stdio.h>
#include<conio.h>
int main()
{
	int x,n,rev=0,y;
	printf("enter the number:\t");
	scanf("%d",&x);
	y=x;
	while(x!=0)
	{
	n=x%10;
	rev=rev*10+n;
	x=x/10;
	}
	if(y==rev)
	{
	printf("\n the reversed num is %d",rev);
	}
	else
	{
		printf("\n the num is not palindrome");
	}
	return(0);
}
