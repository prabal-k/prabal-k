#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i=0,j=0,count1=0,count2=0,sum=0;
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
	printf("\nthe list if prime numbers are ");
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
			printf(" %d ",*(p+i));
			sum=sum+*(p+i);
			count2++;
		}
	}
	printf("\nthe sum of prime numbers are %d",sum);
	printf("\nthe total number of prime number is %d",count2);
	free(p);
	return 0;
}

