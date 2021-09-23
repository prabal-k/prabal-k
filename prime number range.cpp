#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y=1,i,j,count;
	printf("enter the range");
	scanf("%d",&x);
	printf("list of prime number from %d to %d is\n",y,x);
	for(i=y+1;i<x;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count=count+1;
			 } 
		}
		if(count==2)
		printf("%d ",i);
	}
	return(0);
}
