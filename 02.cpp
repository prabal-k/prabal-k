#include<stdio.h>
#include<conio.h>
int main()
{
	int a,x,rev=0;
	printf("enter a number:\t");
	scanf("%d",&a);
	while(a!=0)
	x=a%10;
	rev=rev*10+x;
	a=a/10;
	printf("\nthe reverse number is %d",rev);
	return(0);
}
