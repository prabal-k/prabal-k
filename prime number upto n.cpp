#include<stdio.h>
#include<conio.h>
int main()
{
		int i,a,count=0;
		printf("enter a number");
		scanf("%d",&a);
		for(i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				count=count+1;
			}
			if(count==2)
			printf("%d",a);
		}
		return(0);
}
