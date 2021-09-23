#include<stdio.h>
#include<conio.h>
int main()
{
   char s[50];
   int vowel=0,cons=0,space=0,lw=0,uc=0,i=0,symbol=0;
   printf("\n Enter the sentence");
   gets(s); 
   for(i=0;s[i]!='\0';i++)
   {
     if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||s[i]==32)
     {
        if(s[i]>='A'&&s[i]<='Z')
         {
             uc++;
         }
        else if(s[i]==' ')
        {
             space++;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
              lw++;
        }
	else if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')   
         {
                 vowel++;
         }
        else
         {
                  cons++;
         }
     }
     else
      {
            symbol++;  
      }
    } // for closing 
   printf("\n No of vowels=%d",vowel);
   printf("\n No of consonants=%d",cons);
   printf("\n No of space=%d",space);
   printf("\n No of upper case letters=%d",uc);
   printf("\n No of lowercase letters=%d",lw);
   printf("\n No of symbols=%d",symbol);
return(0);
}
