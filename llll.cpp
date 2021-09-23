#include<stdio.h>
#include<conio.h>
int main()
{
	char a[30],b[30];
	int i=0;
	printf("enter the string:");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	printf("\nthe orfinal is ");
	puts(a);
	printf("\nthe copied is ");
	puts(b);
	return(0);
}
