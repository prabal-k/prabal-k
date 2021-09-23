#include<stdio.h>
#include<conio.h>
int main()
{
	int size=30,a[size],i=0,n,array[size],evencount=0,oddcount=0;
	b:
	printf("\nenter how many input you want to enter\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("\nerroe 401..please retry:");
		goto b;
	}
	printf("\nenter the numbers\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		evencount++;
		array[i]=a[i];
		}
	else
		{
		oddcount++;
		array[i]=a[i];
	    }	
	}
	printf("\n the list of even number is:\t");
	for(i=0;i<evencount;i++)
	{
		printf(" %d ",array[i]);
	}
	printf("\n the list of odd number is:\t");
	for(i=0;i<oddcount;i++)
	{
		printf(" %d ",array[i]);	
	}
	printf("\ntotal even number is %d",evencount);
	printf("\ntotal odd number is %d",oddcount);
	return(0);
}
