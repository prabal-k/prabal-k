#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,result,ch;
	printf("\t\t\t***MENU***\n");
	printf("\t\t\t1)ADD\n\t\t\t2)SUBSTRACT\n\t\t\t3)product\n");
	printf("\nEnter two numbers: ");
	scanf("%d %d",&a,&b);
	lable:
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			result=a+b;
			printf("\nsum=%d",result);
			break;
		case 2:
			result=a-b;
			printf("\nsubstraction=%d",result);
			break;
		case 3:
			result=a*b;
			printf("\nproduct=%d",result);
			break;
			default:
				printf("\nINVALID OUTPUT");
				goto lable;
	}
}
