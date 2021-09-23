#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i=1,count=0;
	printf("enter a number  ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count++;
	}
	if(count==2)
	{
		printf(" prime number");
	}
	else
	printf("not prime");
	return(0);
}
