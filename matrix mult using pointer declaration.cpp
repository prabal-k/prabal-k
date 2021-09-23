#include<stdio.h>
int main()
{
	int c,d,e,f,a[10][10],b[10][10],product[10][10],sum=0,i=0,j=0,k=0;
	int (*p)[10],(*q)[10],(*r)[10];
	p=a;
	q=b;
	r=product;
	printf("\nenter the number of rows and column of first matrix  ");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d]",i,j);
			scanf("%d",*(p+i)+j);
		}
	}
	flag:
	printf("\nenter the number of rows and column of second matrix  ");
	scanf("%d %d",&e,&f);
	if(d!=e)
	{
		printf("\nplease re enter the values ");
		goto flag;
	}
	else
	for(i=0;i<e;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("\nenter at b[%d][%d] ",i,j);
			scanf("%d",*(q+i)+j);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<f;j++)
		{
			for(k=0;k<e;k++)
			{
				sum=sum+*(*(p+i)+k)*(*(*(q+k)+j));
			}
			*(*(r+i)+j)=sum;
			sum=0;
		}
	}
	printf("\nthe product of matrix is \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("%d",*(*(r+i)+j));
		}
		printf("\n");
	}
	return 0;
}
