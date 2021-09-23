#include<stdio.h>
#include<conio.h>
int main()
{
		int i=1,b,sum=0;
		printf("enter the nth term");
		scanf("%d",&b);
		for(i=1;i<=b;i++)
		{
				if(i%2==0)
				{
					sum=sum+i;
				}
		}
				printf("\nthe sum of even natural number is %d",sum);
		return(0);			
}
