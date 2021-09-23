#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char ch;
	label:
	printf("enter the alphabet");
	gets(ch);
	if(ch>='a'&&ch<='z')
	{
		toupper(ch);
	}
	printf("\nthe uppercase of given alphabet is ");
	puts(ch);
	else if(ch>='A'&&ch<='Z')
	{
		tolower(ch);
	}
	printf("\nthe lower case of given alphabet is ");
	puts (ch);
	else 
	{
		printf("\nreenter the alphabet");
		goto label;
	}
	return(0);
}
