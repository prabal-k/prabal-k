#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the coordinates: ");
	scanf("%d %d",&x,&y);
	if(x>0&&y>0)
	{
		printf("\nThe point lie in first quadrant");
	}
	else if(x<0&&y>0)
	{
		printf("\nsecond quadrant");
	}
	else if(x<0&&y<0)
	{
		printf("\nThird quadrant");
	}
	else if(x>0&&y<0)
	{
		printf("\nFourth quadrant");
	}
	else
	{
		printf("\nOrigin");
	}
	return 0;
}
