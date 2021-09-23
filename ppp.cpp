#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,x,count=0;
	printf("enter the number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(i%2==0)
		{
			count++;
		}
}
		if(count==2)
		{
			printf("%d is prime number",x);
		}
		else
		printf("%d is not prime",x);
		return(0);
}
