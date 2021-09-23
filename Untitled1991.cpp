#include<stdio.h>
#include<conio.h>
int main()
{
	int size=20;
	int a[size],n=0,i=0,evencount=0,oddcount=0,j=0,k=0;
	int even[size],odd[size];
	flag:
	printf("\n Enter how many numbers you want to input");
	scanf("%d",&n);
	if(size<n)
	{
		printf("\n Please try again with number less or equal than 20");
		goto flag;
	}
		
	printf("\n Please Enter the number");
	for(i=0;i<=n-1;i++)
	{
		
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			evencount++;  
			even[j]=a[i];  
			j++;
		}
		else
		{
			oddcount++;  
			odd[k]=a[i];  
			k++;
		}
	}
	printf("\n The odd values input by user is:");
	for(i=0;i<=oddcount-1;i++)
		{
			printf(" %d ",odd[i]);
		}

	printf("\n The even values input by user is:");
	for(i=0;i<=evencount-1;i++)
		{
			printf(" %d ",even[i]);
		}
	printf("\nTotal even numbers=%d",evencount);
	printf("\nTotal odd numbers=%d",oddcount);
	return(0);
}
