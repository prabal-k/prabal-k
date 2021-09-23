#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20],count=0,i=0;
	printf("enter a word:\t");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		count++;
	}
	printf("\nthe reverse word is:\t");
	for(i=count;a[i]!=0;i--)
	{
		printf("%c",a[i]);
	}
	return(0);
}

