#include<stdio.h>
int main()
{
	int x,rem,sum=0,y;
	printf("\nenter a number ");
	scanf("%d",&x);
	y=x;
	while(x!=0)
	{
		rem=x%10;
		sum=sum*10+rem;
		x=x/10;
		
	}
	if(y==sum)
	{
		printf("%d is palindrome number",y);
	}
	else
	printf("%d not palindrome",y);
	return 0;
}
