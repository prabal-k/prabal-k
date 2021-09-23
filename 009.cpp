#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i=0,j=0,sum=0,avg=0,temp=0;
	printf("enter 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe 10 numbers entered are ");
	for(i=0;i<10;i++)
	{
		printf(" %d ",a[i]);
		sum=sum+a[i];
	}
	avg=sum/10;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nthe avgerage is %d",avg);
	printf("\nsecond largest %d",a[1]);
	printf("\nsmallest %d",a[9]);
	return(0);
}
