#include<stdio.h>
void num(int);
int main()
{
	int a;
	printf("enter a number \n");
	scanf("%d",&a);
	num(a);
	return(0);
}
void num(int x)
{
	int y,sum,rem;
	y=x;
	while(x!=0)
	{
		rem=x%10;
		sum=sum*10+rem;
		x=x/10;
	}
	if(sum==y)
	{
		printf("\npalindrome");
	}
	else
	{
		printf("\nnot palindrome");
	}
}
