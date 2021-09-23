#include<stdio.h>
int main()
{
	int i=0,j=0,c,d,a[10][10],transpose[10][10];
	printf("enter the number of rows and column\t");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			*(*(transpose+j)+i)=*(*(a+i)+j);
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
