#include<stdio.h>
#include<conio.h>
int main()
{
	int size=20;
	int a[size],n=0,i=0,evencount=0,oddcount=0;
	int even[size],odd[size];
	b:
	printf("\n Enter how many numbers you want to input\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("error 101 plese retry");
		goto b;
	}
	else
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
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
	printf("\n The odd values input by user is:\n");
	for(i=0;i<oddcount;i++)
		{
			printf(" %d ",odd[i]);
		}

	printf("\n The even values input by user is:");
	for(i=0;i<evencount;i++)
		{
			printf(" %d ",even[i]);
		}
	printf("\nTotal even number =  %d",evencount);
	printf("\nTotal odd numbers = %d",oddcount);
	return(0);
}
