#include<stdio.h>
#include<conio.h>
int main()
{
	int size=20,a[size],n,i=0,count=0,count1=0,j=0,prime[size];
	b:
	printf("\nenter the size of array:\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("\nerror 401..please retry\n");
		goto b;
	}
	printf("\nenter the numbers:\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
	}
	
			if(count==2)
			{
				prime[i]=a[i];
				count1++;
			}
	printf("\n The list of prime number is:\t");
	for(i=0;i<count1;i++)
	{
	printf(" %d ",prime[i]);
	}
	printf("the total number of prime number is %d",count1);
	return(0);
}
