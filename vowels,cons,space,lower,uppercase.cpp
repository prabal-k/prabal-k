#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[80];
	int i=0,vowel=0,con=0,space=0,lw=0,uc=0,symbol=0;
	printf("enter the sentence\t");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122)||ch[i]==32)
		{
			 if(ch[i]>=65&&ch[i]<=90)
			{
				uc++;
			}
			if(ch[i]>=97&&ch[i]<=122)
			{
				lw++;
			}
			else if(ch[i]==' ')
			{
				space++;
			}
			else if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
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

	printf("\n the number of vowel is %d",vowel);
		printf("\n the number of consonent is %d",con);
			printf("\n the number of lower case is %d",lw);
				printf("\n the number of upper case is %d",uc);
					printf("\n the number of symbol is %d",symbol);
}
