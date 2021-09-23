#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i=0,j=0,count1=0,count2=0;
	printf("enter how many numbers you want to enter");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nmemory isnt allocated");
		exit(0);
	}
	else
	printf("\nenter the numbers  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		count1=0;
		for(j=1;j<=*(p+i);j++)
		{
			if(*(p+i)%j==0)
			{
				count1++;
			}
		}
		if(count1==2)
		{
			printf("\nthe prime numbers are ");
			for(i=0;i<n;i++)
			{
				printf(" %d ",*(p+i));
			}
		}
	}
	return 0;
}

