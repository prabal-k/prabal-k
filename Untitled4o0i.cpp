#include<stdio.h>
#include<conio.h>
int comparision(int,int,int);
int main()
{
	int x,y,z,result;
	printf("\nEnter 3 integers ");
	scanf("%d %d %d",&x,&y,&z);
	result=comparision(x,y,z);
	printf("\nThe maximum value is %d.",result);
	return 0;
}
int comparision(int a,int b,int c)
{
	if(a>=b&&a>=c)
	{
		return a;
	}
	else if(b>=a&&b>=c)
	{
		return b;
	}
	else
	return c;
}
