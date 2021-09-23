#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20];
	int i=0,count=0;
	printf("enter a word:\t");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		count++;
	}
	count--;
	printf("\nthe reverse word is:\t");
	for(i=count;a[i]!=0;i--)
	{
		printf("%c",a[i]);
	}
	return(0);
}

