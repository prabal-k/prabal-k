#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],c,d,i=0,j=0;
	int *p,*q;
	p=a[10];
	q=b[10];
	printf("\nEnter the number of rows and column");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d]",i,j);
			scanf("%d",*(p+i)+j);
		}
	}
	printf("\nthe transopse of matrix is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			b[j][i]=a[i][j];
		}
	}
		for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
