#include<stdio.h>
#include<conio.h>
int main()
{
	char a[30],b[30];
	int i=0,count=0;
	printf("enter the string\t");
	gets(a);	
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
		count++;
	}
	printf("\nthe copied string is");
	puts(b);
	count--;
	printf("\nthe reversed word is:");
	for(i=count;a[i]!=0;i--)
	{
		printf("%c",a[i]);
	}
	return(0);
}
	
