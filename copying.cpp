#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char a[1000],b[30];
	p=fopen("C:\\TURBOC3\\XYZMAIN2.txt","r");
	if(p==NULL)
	{
		printf("FILE not opened:");
		exit(0);
	}
	while(fgets(a,1000,p)!=NULL)
	{
		puts(a);
	}
	fclose(p);
	return 0;
}
