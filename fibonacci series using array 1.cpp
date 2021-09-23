#include<stdio.h>
#include<conio.h>
int main()
{
	int size,a[size],n,i=0,temp;
	b:
	printf("\nenter the range");
	scanf("%d",&n);
	if(size<n)
	{
		printf("error 401..please retry\t");
		goto b;
	}
	a[0]=0,a[1]=1;
	printf("the fibonacci series is:\t");
	printf("%d %d",a[0],a[1]);
	for(i=0+2;i<n;i++)
	{
		temp=a[0]+a[1];
		printf("%d",temp);
		a[0]=a[1];
		a[1]=temp;	
	}
	return(0);
}
