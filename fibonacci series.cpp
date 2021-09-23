#include<stdio.h>
#include<conio.h>
int main()
{
	int x=0,y=1,a,b,i=1;
	printf("enter the number of terms to dispaly");
	scanf("%d",&a);
	printf("fibonaccic series upto %d terms\n",a);
	printf("%d %d",x,y);
	for(i=3;i<=a;i++)
	{
		b=x+y;
		printf(" %d ",b);
		x=y;
		y=b;
	}
	return(0);
}
