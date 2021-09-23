#include<stdio.h>
#include<conio.h>
int main()
{
	int c,d,a[c][d],e,f,b[e][f],i=0,j=0,sum[100][100];
	printf("enter the number of rows and number of column for first matrix:\t");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the number of rows and number of column for second matrix:\t");
	scanf("%d %d",&e,&f);
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n the sum of matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf(" %d ",sum[i][j]);
		}
			printf("\n");
	}
	return(0);
}
