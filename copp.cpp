#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i=0,j=0,count=0,sum=0;
	printf("enter the ranges\t");
	scanf("%d %d",&x,&y);
	printf("list of prime number from %d to %d is:\n",x,y);
	for(i=x+1;i<y;i++)
	{
		count=0;
		for(j=1;j<y;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d ",i);
			sum=sum+i;
		}
	}
	printf("\nthe sum of prime numbers is %d",sum);
	return(0);
}
