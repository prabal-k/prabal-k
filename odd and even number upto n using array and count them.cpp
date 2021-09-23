#include<stdio.h>
#include<conio.h>
int main()
{
	int size=30,a[size],n,i=0,evencount=0,oddcount=0;
	b:
	printf("\nenter the numbers in array\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("error 401..please retry");
		goto b;
	}
	printf("\nenter the numbers to check\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nlist of even numbers is:\t");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf(" %d ",a[i]);
			evencount++;
		}
	}
	printf("\nlist of odd number is:\t");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf(" %d ",a[i]);
			oddcount++;
		}
	}
	printf("\n\ntotal numbers of even number is %d",evencount);
	printf("\n\ntotal numbers of odd number is %d",oddcount);
	return(0);
}
