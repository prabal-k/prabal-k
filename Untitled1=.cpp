#include<stdio.h>
int main()
{
	int x,y,*p,*q,temp;
	p=&x;
	q=&y;
	printf("Enter two values: ");
	scanf("%d %d",&x,&y);
	printf("\nValues before swapping x=%d y=%d",x,y);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("\nAfter swapping x=%d  y=%d",*p,*q);
	return 0;
}
