#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i=0,j=0,count=0,sum=0;
	printf("enter the 2 range:");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=a;j<=b;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	}
	printf("\nthe sumof prime number from %d to %d is %d",a,b,sum);
	return(0);
}
