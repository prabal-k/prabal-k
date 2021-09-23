#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	printf("Health risk\t\tAir quality health index\n\n");
	printf("low\t\t\t1-3\nmoderate\t\t4-6\nhigh\t\t\t7-10\nveryhigh\t\tabove 10\n");
	printf("enter air quality health index ");
	scanf("%d",&ch);
	switch(ch);
	{
		case1:
			printf("\nlow");
			
		case2:
			printf("\nmoderate");
		
		case3:
			printf("\nhigh");
		
		case4:
			printf("\nvery high");
		
		default:
			printf("\ninvalid output");
		}
		return 0;
}
