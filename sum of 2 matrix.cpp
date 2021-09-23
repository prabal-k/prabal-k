#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],b[2][3],sum[2][3],i=0,j=0;
	printf("enter the elements:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter a[%d][%d] elements\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter b[%d][%d] elements\t",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n the sum of matrix is:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf(" %d ",sum[i][j]);
		}
			printf("\n");
	}
	return(0);
}
