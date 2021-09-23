#include<stdio.h>
#include<conio.h>
int main()
{
	int size=30,i,j,temp,a[size],count;
	b:
	printf("enter the number you want to enter\n");
	scanf("%d",&count);
	if(size<count)
	{
		printf("sorry beyound limit\n");
		goto b;
	}
	printf("enter the numbers");
	for(i=0;i<count;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nthe numbers in ascending order is:\n");
	for(i=0;i<count;i++)
	{
		printf("\t%d\t",a[i]);
	}
	return(0);
}
