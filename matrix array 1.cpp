#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],i=0,j=0;
	printf("enter 4 numbers:\t");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\tthe matrix are:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return(0);
}
