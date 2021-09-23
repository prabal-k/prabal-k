#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p,*q;
	char c;
	p=fopen("C:\\CPROGRAM\\XYZMAIN.txt","r");
	if(p==NULL)
	{
		printf("\nFile not found");
		exit(0);
	}
	q=fopen("C:\\CPROGRAM\\XYZCOPIED.txt","w");
	if(q==NULL)
	{
		printf("\nFile not found");
		exit(0);
	}
	
	for(c=fgetc(p);c!=EOF;c=fgetc(p))
	{
		fputc(c,q);
	}
	printf("\n\nContent copied to another file:");
	fclose(p);
	fclose(q);
	return 0;
}
