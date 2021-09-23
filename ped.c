#include<stdio.h>
#include<conio.h>
int main()
{
	int x,n,rev=0;
	printf("enter the number:\t");
	scanf("%d",&x);
	while(x!=0)
	n=x%10;
	rev=rev*10+n;
	x=x/10;
	printf("\n the reversed num is %d",rev);
	return(0);
}
