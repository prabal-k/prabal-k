#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i,j,count=0;
	printf("enter the range");
	scanf("%d",&x);
	printf("list of prime number from 1 to %d is\n",x);
	for(i=1;i<=x;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count=count+1;
			 } 
		}
		if(count==2)
		{
		printf("\n%d ",i);
		}
	}
	return(0);
}
