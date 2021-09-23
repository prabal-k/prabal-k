#include<stdio.h>
#include<conio.h>
int main()
{
	int size,a[5]={0,1,1,2,3},temp,n,i;
	b:
	printf("\nenter the range\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("error 401..please retry:\t");
		goto b;
	}
	printf("\nthe fibonacci series is:\t");
	a[0]=0,a[1]=1;
	printf("%d %d",a[0],a[1]);
	for(i=0;i<n;i++)
	{
		temp=a[i]+a[i+1];
		printf(" %d ",temp);
		a[i]=a[i+1];
		a[i]=temp;	
	}
	return(0);
}
