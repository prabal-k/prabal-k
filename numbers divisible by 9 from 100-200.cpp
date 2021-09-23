#include<stdio.h>
#include<conio.h>
int main()
{
		int i=100,b=200,sum=0;
		printf("list of number divisible by 9:\n");
		for(i=100;i<=b;i++)
		{
			if(i%9==0)
			{
				printf("%d  ",i);
				sum=sum+i;
			}
		}
		printf("\nthe sum is %d",sum);
		return(0);
}
