#include<stdio.h>
int main()
{
	int a[20],n,i=0,j=0,count=0,sum=0;
	printf("\nEnter how many numbers do you want ");
	scanf("%d",&n);
	printf("\nenter %d number in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{

			sum=sum+a[i];
		}
	}
	printf("\nthe sum is %d",sum);
	return 0;
}
