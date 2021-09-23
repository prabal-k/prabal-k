#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[100];
	int i=0,vowel=0,con=0,space=0,lower=0,upper=0,symbol=0;
	printf("enter the sentence\t");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if((ch[i]>=65&&ch[i]>=90)||(ch[i]>=97&&ch[i]<=122)||ch[i]==32)
		{
		 	if(ch[i]>=65&&ch[i]<=90)
			{
				upper++;
			}
			else if(ch[i]==' ')
			{
				space++;
			}
			else if(ch[i]>=97&&ch[i]<=122)
			{
				lower++;
			}	
			else if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='0'||ch[i]=='U')
			{
				vowel++;
			}
			else
			{
				con++;
			}
	}
	else
	{
		symbol++;
	}
}
	printf("\nthe number of vowel is %d",vowel);
	printf("\nthe number of consonant is %d",con);
	printf("\nthe number of lowercase is %d",lower);
	printf("\nthe number of uppercase is %d",upper);
	printf("\nthe number of space is %d",space);
	printf("\nthe number of symbol is %d",symbol);
	return(0);
					
}
