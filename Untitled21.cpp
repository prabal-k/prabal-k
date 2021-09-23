#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],i=0,j=0;
	printf("\nEnter the 4 elements:\t");
	for(i=0;i<=1;i++) 
	{
		for(j=0;j<=1;j++) 
		{
			scanf(" %d ",&a[i][j]);
		}
	}
	for(i=0;i<=1;i++) 
	{
		for(j=0;j<=1;j++) 
		{
			printf(" %d ",&a[i][j]);
		}
		printf("\n");
	}
return(0);
}
