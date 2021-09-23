#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],i=0,j=0;
	printf("enter the values:");
	for(i=0;i<2;i++)
	{
		for(j=0;i<3;j++)
		{
			printf("\nenter element");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return(0);
}
