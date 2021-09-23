#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],i=0,j=0,c,d;
	int (*p)[10],(*q)[10];
	p=a;
	q=transpose;
	printf("enter the number of rows and columns");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d] ",i,j);
			scanf("%d",*(p+i)+j);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			*(*(p+j)+i)=*(*(q+i)+j);
		}
	}
	printf("\nthe transpose of matrix is \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf(" %d ",*(*(transpose+i)+j));
		}
		printf("\n");
	}
	return 0;
}
