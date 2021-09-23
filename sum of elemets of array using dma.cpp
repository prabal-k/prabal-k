#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],n,i=0,*p,b=0;
	printf("\nenter the number of element you want ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nmemory isnot located");
		exit(0);
	}
	printf("\nenter the elements in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
		b=b+*(p+i);
	}
	printf("\nTHE SUM of elements of array is %d",b);
	free(p);
	return 0;
}
