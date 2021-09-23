#include<stdio.h>
#include<math.h>
int main()
{
	int x,temp1=0,temp2=0,rem1=0,rem2=0,count=0,sum=0;
	printf("\nEnter a number: ");
	scanf("%d",&x);
	temp1=x;
	temp2=x;
	while(x!=0)
	{
		rem1=x%10;
		count++;
		x=x/10;
	}
	while(temp1!=0)
	{
		rem2=temp1%10;
		sum=sum+pow(rem2,count);
		temp1=temp1/10;
	}
	if(sum==temp2)
	{
		printf("\n%d is armstrong number",temp2);
	}
	else
	{
		printf("\n%d not armstrong number",temp2);
	}
}
