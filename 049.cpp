#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,x,count=0;
	printf("enter the numeber");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;;
		}
	}
		if(count==2)
		{
			printf("\nprime ");
		}
		else
		{
			printf("\n not prime");
		}

	return(0);
}
