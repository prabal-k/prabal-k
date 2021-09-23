#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[n],i=0,temp;
	printf("enter the range for fibonacci series:\t");
	scanf("%d",&n);
	printf("\n the fibonacci series is :\t");
	a[0]=0,a[1]=1;
	printf("%d %d",a[0],a[1]);
	for(i=2;i<n;i++)
	{
		temp=a[0]+a[1];
		printf("%d",temp);
		a[0]=a[1];
		a[1]=temp;
	}
	return(0);
}
