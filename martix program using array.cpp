#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],i=0,j=0;
	printf("enter the elements:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nenter [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d ",a[i][j]);
		}
			printf("\n");
	}
	return(0);
}
