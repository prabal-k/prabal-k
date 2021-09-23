#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	int x,y;
	p=fopen("C:\\CPROGRAM\\HI.txt","w+");
	if(p==NULL)
	{
		printf("\nFILE NOT FOUND");
		exit(0);
	}
	while(fscanf(p,"%d",&x)!=EOF)
	{
		printf("\nthe value is %d",y);
	}
	fclose(p);
	return 0;
}
