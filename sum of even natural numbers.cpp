#include<stdio.h>
#include<conio.h>
int main()
{
		int i=1,a,sum=0;
		printf("enter a number");
		scanf("%d",&a);
		printf("list of even natural number");
		for(i=a;i<=a;i--)
		{
				if(a%2==0)
				{
					printf("%d ",a);
					sum=sum+a;
				}
				}
				printf("\nsum of even natural number is %d",sum);
	return(0);
}

