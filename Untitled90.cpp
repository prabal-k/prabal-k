#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i=0,j=0,temp;
	printf("\nenter the size of array  ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nmemory not located");
		exit(0);
	}
	else
	printf("\nenter the numbers  ");
	for(i=0;i<n;i++)
	{
		scanf(" %d ",(p+i));
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\nASCENDING ORDER IS\n");
		printf("\nTHe third highest number is %d ",*(p-3));
	free(p);
	return 0;
	
}
