#include<stdio.h>
#include<conio.h>
int main()
{
	int size=30,a[size],i=0,temp,n;
	b:
	printf("\nenter the the range\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("\npleasee retry\n");
		goto b;
	}
	a[0]=0,a[1]=1;
	printf("\nthe fibonacci series is:\t");
	printf("%d %d",a[0],a[1]);
	for(i=2;i<n;i++)
	{
		temp=a[0]+a[1];
		printf(" %d ",temp);
		a[0]=a[1];
		a[1]=temp;
	}
	return(0);
}
