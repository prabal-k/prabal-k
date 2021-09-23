#include<stdio.h>
int main()
{
	float f,c,ans;
	printf("enter the temperature in celsius ");
	scanf("%f",&c);
	f=((c*9)/5)+32;
	printf("\nThe temperature in fah is %f.",f);
	return 0;
	
}
