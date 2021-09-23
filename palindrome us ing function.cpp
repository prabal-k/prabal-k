#include<stdio.h>
#include<conio.h>
int num(int);
int main()
{
	int a,temp;
	printf("enter the number\t");
	scanf("%d",&a);
	temp=num(a);
	if(temp==0)
	{
		printf("\nthe number is palindrome");
	}
	else 
	{
		printf("\nthe num is not palindrome");
	}
	return(0);
}

int num(int x)
{
	int num2,rem,sum,y;
	y=x;
	while(x!=0)
	{
		rem=x%10;
		sum=sum*10+rem;
		x=x/10;
	}
	if(y==sum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
