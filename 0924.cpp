#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i=0,j=0,count=0,sum=0;
	printf("enter the range");
	scanf("%d %d",&x,&y);
	for(i=x;j<=y;j++)
	{
		count=0;
		for(j=1;j<=y;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf("\n the sum of prime number from %d to %d is %d",x,y,sum);
	return(0);
}
