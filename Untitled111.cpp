#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[10],b;
	printf("enter 10 integers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
			b=a[i];
			a[i]=a[j];
			a[j]=b;
			}
	}
	printf("\nthe numbers in ascending order is:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return(0);
}
}

