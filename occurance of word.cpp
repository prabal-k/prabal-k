#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *p;
	char a[1000],b[30];
	int i=0,j=0,count=0,ls,lw,temp,ch;
	p=fopen("C:\\CPROGRAM\\XYZMAIN2.txt","r");
	if(p==NULL)
	{
		printf("\nfile not opened");
		exit(0);
	}
	while(fgets(a,1000,p)!=NULL)
	{
		puts(a);
	}
	printf("\nEnter the word which you want to search: ");
	gets(b);
	ls=strlen(a);
	lw=strlen(b);
	for(i=0;i<ls;i++)
	{
		temp=i;
		for(j=0;j<lw;j++)
		{
			if(a[i]==b[j])
			i++;
		}
		ch=i-temp;
		if(ch==lw)
	
			count++;
		i=temp;
	}
	printf("\nOCCURANCE of %s word is %d",b,count);
	fclose(p);
	return 0;
	
}
