#include<stdio.h>
#include<conio.h>
int main()
{
	int size=30,a[size],n,i=0,evencount=0,oddcount=0,even[size],odd[size];
	b:
	printf("\nenter how many numbers you want to input\t");
	scanf("%d",&n);
	if(size<n)
	{
	printf(" error please retry:");
	goto b;
	}
	printf("enter the numbers\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
		if(a[i]%2==0)
		{
			evencount++;
			even[i]=a[i];
		}
		else
		{
			oddcount++;
			odd[i]=a[i];
		}
	}
	printf("\nthe list of even numbers is:\t");
	for(i=0;i<evencount;i++)
	{
		printf(" %d ",even[i]);
	}
	printf("\nthe list of odd numbers is:\t");
	for(i=0;i<oddcount;i++)
	{
		printf(" %d ",odd[i]);
	}
	printf("numbers off even number is %d",evencount);
	printf("numbers off odd number is %d",oddcount);
	return(0);
}
