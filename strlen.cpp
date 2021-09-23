#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[18];
	int x;
	printf("enter the sentence:\t");
	gets(a);
	x = strlen(a);
	printf("the number of character is %d",x);
	return(0);
}
