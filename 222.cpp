#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,a,b,c,multiple1,multiple2,multiple3;
	printf("enter the numbers:\t");
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=10;i++)
	{
		multiple1=a*i;
		printf("\n%d * %d= %d ",a,i,multiple1);
		multiple2=b*i;
		printf("\t%d * %d= %d ",b,i,multiple2);
		multiple3=c*i;
		printf("\t%d * %d= %d ",c,i,multiple3);
	}
	return(0);
}
