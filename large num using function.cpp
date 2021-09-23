#include<stdio.h>
int large(int a[]);
int main()
{
	int i=0,b[10],result;
	printf("\nenter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	result=large(b);
	printf("\nthe largest number is %d",result);
	return(0);
}
int large(int m[])
{
	int j=0,k=0,temp;
	for(j=0;j<10;j++)
	{
		for(k=j+1;k<10;k++)
		{
			if(m[j]<m[k])
			{
				temp=m[j];
				m[j]=m[k];
				m[k]=temp;
			}
		}
	}
	return m[0];
}
