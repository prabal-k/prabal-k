#include<stdio.h>
#include<math.h>
int pal(int);
int main()
{
	int x,ans2,temp2;
	printf("enter the number");
	scanf("%d",&x);
	temp2=x;
	ans2=pal(x);
	if(ans2==temp2)
	{
		printf("\nthe number is palindrome");
		
	}
	else
	{
		printf("\nnot palindrome");
	}
	
	return 0;
}
int pal(int y)
{
		int count=0,rem1,rem2,ans1=0,temp1,temp2;
		temp1=y;
		temp2=y;
		while(y!=0)
		{
			rem1=y%10;
			count++;
			y=y/10;
		}
		while(temp1!=0)
		{
			rem2=temp1%10;
			ans1=ans1+pow(rem2,count);
			temp1=temp1/10;
		}
		return ans1;
	
}
