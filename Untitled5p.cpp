#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[50];
	int i=0,uppercase=0,lowercase=0;
	FILE *p;
	p=fopen("C:\\CPROGRAM\\new.txt","r");
	if(fgets(a,50,p) != NULL) 
	{
		puts(a); 
	}
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]>='A' && a[i]<='Z')
    	{
    		uppercase++;
		}
	if(a[i]>='a' && a[i]<='z')
    	{
    		lowercase++;
		}
	}
	printf("\nNo of lowercase alphabets = %d\n",lowercase);
    printf("\nNo of uppercase alphabets = %d\n",uppercase);
	fclose(p);
	return 0;
}
