#include<stdio.h>
#include<conio.h>
int main()
{
		int i=1,a,b=1;
		printf("enter a number");
		scanf("%d",&a);
		for(i=1;i<=a;i++)
		{
				b=i*b;
		}
		printf("%d",b);
		return(0);
}
