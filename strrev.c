#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[16];
	printf("enter a word\n");
	gets(a);
	strrev(a);
	printf("the reverse word is:\t");
	puts(a);
	return(0);
}
