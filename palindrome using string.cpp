#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int x;
	printf("enter a word\t");
	gets(a);
	strcpy(b,a);
	strrev(a);
	x=strcmp(a,b);
	if(x==0)
	{
		printf("\nthe string is palindrome:");
	}
	else
	printf("not palindrome");
	return(0);
}
