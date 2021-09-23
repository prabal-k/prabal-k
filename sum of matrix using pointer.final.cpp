#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i=0,j=0,c=0,d=0,e,f;
	int (*p)[10],(*q)[10],(*r)[10];
	p=a;
	q=b;
	r=sum;
	printf("enter the number of rows and column of first matrix");
	scanf("%d %d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("\nenter at a[%d][%d]",i,j);
			scanf("%d",*(p+i)+j);
		}
	}
	flag:
	printf("\nenter the number of rows and columns of second matrix");
	scanf("%d %d",&e,&f);
	if(c!=e||d!=f)
	{
		printf("\nplease check the value and reenter");
		goto flag;
	}
	else
	{
		for(i=0;i<e;i++)
		{
			for(j=0;j<f;j++)
			{
				printf("\nenter at b[%d][%d]",i,j);
				scanf("%d",*(q+i)+j);
			}
		}
	}
	{
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				*(*(r+i)+j)=*(*(p+i)+j)+*(*(q+i)+j);
				printf(" %d ",*(*(r+i)+j));
			}
			printf("\n");
		}
	}
	return 0;
	
}
