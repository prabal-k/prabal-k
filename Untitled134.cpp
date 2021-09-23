#include<stdio.h>
int main()
{
	int a[30],i=0,j=0,n=0,x=0;
	printf("enter the number of elements you want");
	scanf("%d",&n);
	printf("\nenter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter which number do you want to search");
	scanf("%d",&x);
	if(x==a[i])
	{
		printf("\nthe %d number belongs here",x);
	}
	else
	{
		printf("\n%d does not belong here");
	}
	return 0;
	
}
