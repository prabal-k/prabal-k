#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int *p;
   int j=0,i=0,count=0,n=0,count2=0,sum=0;
   printf("Enter how many numbers you want to enter:");
   scanf("%d",&n);
   p=(int*)malloc(n*sizeof(int));
   if(p == 0)
   {
       printf("memory is not allocated");
       exit(0);
   }
   else
   {
      printf("\nenter the %d numbers:",n);
      for(i=0;i<=n-1;i++)
      {
            scanf("%d", (p+i));
      }
      printf("The prime numbers are:");
      for(i=0;i<=n-1;i++)
      {
         count=0;
         for(j=1;j<=*(p+i);j++)
         {
            if(*(p+i)%j==0)
            {
               count=count+1;
            }
         }
         if(count==2)
        {
            printf("\n%d",*(p+i));
            sum=sum+*(p+i);
            count2++;
        }
      }
      free(p);
      printf("\nthe sum of the prime numbers are:%d",sum);
      printf("\nthe numbers of prime number enters are:%d",count2);
   }
 	return 0;
}
