#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,temp1,temp2,rem1,rem2,sum=0,count=0;
	printf("Enter a number ");
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
		printf("\n%d is armstrong.",temp2);
	}
	else
	{
		printf("%d is not armstrong",temp2);
	}
}
