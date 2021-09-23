#include<stdio.h>
#include<conio.h>
int main()
{
	char a[70];
	int lowercount=0,uppercount=0,i=0;
	printf("enter a sentence\t");
	gets(a);
	for(i=0;i<=a[70];i++)
	{
	printf("%s",a[i]);
	}
	for(i=65;i<=90;i++)
	{
		uppercount++;
	}
	for(i=97;i<=122;i++)
	{
		lowercount++;	
	}
	
	printf("\nthe number of lowercase alphabet is %d and uppercase alphabet is %d",lowercount,uppercount);
	return(0);
}
