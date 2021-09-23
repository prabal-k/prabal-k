#include<stdio.h>
#include<conio.h>
int main()
{
		int x,y,count=0;
		printf("enter the number upto which you want to print prime number");
		scanf("%d",&x);
		printf("list of prime number is:");
		for(y=1;y<=x;y++)
		{
				if(x%y==0)
				{	
					count=count+1;
				
				if(count==2)
			
				    printf("%d",y);
				}
	}
		return(0);
}
