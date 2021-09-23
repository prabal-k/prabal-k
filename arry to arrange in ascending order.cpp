#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,temp;
	printf("enter 10 integers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("\n\nthe 10 numbers sorted in ascending order is:\n");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	return(0);
}
