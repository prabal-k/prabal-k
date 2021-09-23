#include<stdio.h>
#include<conio.h>
int main()
{
	int c,d,e,f,a[c][d],b[e][f],i=0,j=0,product[10][10],k=0,sum=0;
	printf("enter the number of rows and column in first matrix:\t");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d]\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	label:
	printf("\nenter the number of rows and number of colums in second matrix:\t");
	scanf("%d %d",&e,&f);
	if(d!=e)
	{
		printf("\nplease reenter the value:\n");
		goto label;
	}
	else
	{
		for(i=0;i<e;i++)
		{
			for(j=0;j<f;j++)
			{
				printf("enter at b[%d][%d]\t",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<c;i++)
		{
			for(j=0;j<f;j++)
			{
				for(k=0;k<e;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
			product[i][j]=sum;
			sum=0;
		}
		}
		printf("\n the product of matrix is:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<f;j++)
				printf(" %d ",product[i][j]);
		}
			printf("\n");

	}
return(0);	
}
