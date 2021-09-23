#include<stdio.h>
int main()
{
	int a[30],size,temp,b[30],i=0,j=0;
	flag:
	printf("enter the size of an array\t");
	scanf("%d",&size);
	if(size>30)
	{
			printf("\nplease retry");
			goto flag;		
	}
	printf("\nenter the numbers\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(a+i)<*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
				
			}
		}
	}
	printf("\nthe descending order is \n");
	for(i=0;i<size;i++)
	{
		printf(" %d ",*(a+i));
	}
	return 0;
	
}
