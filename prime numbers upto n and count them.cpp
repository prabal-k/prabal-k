#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,size=30,a[size],n,count=0,y=1,countprime=0,prime[size];
	b:
	printf("enter how many numbers you want to enter\t");
	scanf("%d",&n);
	if(size<n)
	{
		printf("erroe 401.please retry\n");
		goto b;
	}
	printf("enter the numbers:\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%y==0)
		{
		count++;
		y++;
		countprime++;
		prime[size]=a[i];
		}
	}
	if(count==2)
	for(i=0;i<countprime;i++)
	{
		printf("\nlist of prime number is \n %d ",prime[i]);
	}
	printf("\ntotal number of prime numbers is %d",countprime);
	return(0);
}
