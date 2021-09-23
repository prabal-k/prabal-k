#include<stdio.h>
int main()
{
	int c,d,e,f,i=0,j=0,k=0,a[10][10],b[10][10],product[10][10],sum=0,*p,*q,*r;
	p=a;
	q=b;
	r=product;
	printf("enter the number of rows and colums of first matrix\t");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d]",i,j);
			scanf("%d",(p+i)+j);
		}
	}
	flag:
	printf("\nenter the number of rows and colum of second matrix\t");
	scanf("%d %d",&e,&f);
	if(d!=e)
	{
		printf("\nplease retry");
		goto flag;
	}
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("\nenter at b[%d][%d]",i,j);
			scanf("%d",(q+i)+j);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<f;j++)
		{
			for(k=0;k<e;k++)
			{
				sum=sum+a[i][k]*b[j][k];
				
			}
			product[i][j]=sum;
			sum=0;
		}
	}
	printf("\n the product of matrix is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<f;j++)
		{
			printf(" %d  ", (*(*(r+i)+j)));
		}
	}
	return 0;
}
