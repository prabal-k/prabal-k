#include<stdio.h>
#include<conio.h>
int main()
{
	char a[19];
	int i=0,count=0;
	printf("enter the sentence\t");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		count++;
	}
	printf("\nthe number of character is %d",count);
	return(0);
}
