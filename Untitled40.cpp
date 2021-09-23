#include<stdio.h>
#include<math.h>
  int main()
  {
    float sqrrt;
    int (*p)[10],matrix[10][10];
    int i=0,j=0,sum=0,row=0,col=0,a[10],count=0,sum1=0;
    p=matrix;
    printf("Enter number of rows and column: ");
    scanf("%d %d",&row,&col);
    printf("\nEnter element of matrix\n");
    for(i=0;i<row;i++)
     {
      for(j=0;j<col;j++)
          {
            scanf("%d",*(p+i)+j);
          }
       }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+*(*(p+i)+j);
            }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(*(*(p+i)+j)%2==0)
          	 	{
          	 		a[count]=*(*(p+i)+j);
          	 		count++;
				}
        }
    }
    for(i=0;i<count;i++)
    {
    	sum1=sum1+((a[i])^2);
	}
    sqrrt=sqrt(sum1);
   	printf("\nThe sum of principal diagonal elements is %d",sum);
   	printf("\nThe square roots of sum of square elements of all even elements is %.2f",sqrrt);
    return 0;
    }
