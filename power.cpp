#include<stdio.h>
int power(int,int);
int main()
{
	int x,y,result;
	printf("enter the number and power to be raised\t");
	scanf("%d %d",&x,&y);
	result=power(x,y);
	printf("\nthe result is %d",result);
	return(0);
}
int power(int a,int b)
{
	int result2=1;
	while(b!=0)
	{
		result2=a*result2;
		b--;
	}
	return result2;
}
