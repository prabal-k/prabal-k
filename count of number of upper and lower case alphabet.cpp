#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[100];
	int i=0,upper=0,lower=0,vowel=0;
	printf("enter the sentence\t");
	gets(ch);
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]>=65&&ch[i]<=90)
		{
			upper++;
		}
		else if(ch[i]>=97&&ch[i]<=122)
		{
			lower++;
		}
	}
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]=97 || ch[i]=101)
		{
			vowel++;
		}
	}
	printf("\n the number of lowercase alphabet is %d",lower);
	printf("\n the number of uppercase alphabet is %d",upper);
	printf("\n the number of vowel is %d",vowel);
	return(0);
}

 
