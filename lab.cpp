#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	label:
	printf("enter the alphabet");
	scanf("%c",&a);
	if(a>='a'&&a<='z')
	{
		toupper(a);
	}
	printf("\nthe uppercase of given alphabet is ");
	puts(a);
	else if(a>='A'&$a<='Z')
	{
		tolower(a);
	}
	printf("\nthe lower case of given alphabet is ");
	puts(a);
	else
	{
		printf("\nreenter the alphabet");
		goto label;
	}
}
