#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	int x,y;
	p=fopen("C:\\CPROGRAM\\ABC.txt","a+");
	if(p==NULL)
	{
		printf("\nFILE NOT FOUND");
		exit(0);
	}
	while(fscanf(p,"%d",&x)!=EOF)
	{
		printf("\nthe value is %d",x);
	}
	fclose(p);
	return 0;
}
