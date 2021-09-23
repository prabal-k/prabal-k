#include<stdio.h>
#include<conio.h>
int main()
{
	char a[50],b[50];
	int i=0,count=0,c;
	printf("enter the string\t");
	gets(a);
	printf("\nthe copied word is ");
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
		count++;
	}
	puts(b);
	count--;
	printf("\nthe reverse is ");
	for(i=count;a[i]!=0;i--)
	{
		printf("%c",a[i]);
	}
	for(i=0;i<count/2;i++)
	{
		if(a[i]!=b[i])
		{
			printf("\nnot palindrome");	
			break;
		}
		else
		{
			printf("\npalindrome");
		}
	}
	return(0);
}
