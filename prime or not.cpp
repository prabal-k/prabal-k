#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i=0,count=0;
	printf("enter the number\t");
	scanf("%d",&x);
	while(x>0)
	for(i=1;x>=i;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\nthe given number is prime number.");
	}
	else
	printf("\nthe given number is not prime number.");
	return(0);
}
