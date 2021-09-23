#include<stdio.h>
void asc(int a[]);
int main()
{
	int b[10],i=0;
	printf("enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	asc(b);
	return(0);
}
void asc(int x[])
{
	int j=0,k=0,temp;
	for(j=0;j<10;j++)
	{
		for(k=j+1;k<10;k++)
		{
			if (x[j]>x[k])
			{
				temp=x[j];
				x[j]=x[k];
				x[k]=temp;
			}
		}
	}
	printf("\nThe numbers in ascending order is \n");
	for(j=0;j<10;j++)
	{
		printf(" %d ",x[j]);
	}
}
