#include<stdio.h>
#include<conio.h>
int main()
{
	int x,sum=0,a;
	printf("enter a number:\t");
	scanf("%d",&x);
	while(x>=0)
	a=x%10;
	sum=sum*10+a;
	a=a/10;
	printf("\nthe reverse number is %d",sum);
	return(0);
}
