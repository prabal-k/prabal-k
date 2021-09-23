#include<stdio.h>
#include<math.h>
  int main()
  {
    double root;
    int (*p)[10],matrix[10][10],sum2=0;
    int i,j,k,square,sum=0,m,n;
    p=matrix;
    printf("Enter number of rows and column");
    scanf("%d %d",&m,&n);
    
    printf("\nEnter element of matrix\n");
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
          {
            printf("Enter [%d][%d] :",i,j); 
            scanf("%d",*(p+i)+j);
          }
       }
    
    printf("\nSquare of even elements are ");
    for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
             {
               if(*(*(matrix+i)+j)%2==0)
                 {
                   square=*(*(matrix+i)+j) * *(*(matrix+i)+j);
                   sum=sum+square;
             
            printf("%d ",square);
      			}
    		}			
    	}
    	for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			if(i==j)
    			{
    				sum2=sum2+matrix[i][j];
				}
			}
		}
    
     printf("\nThe sum of all even number in a matrix is %d ",sum);
    root=sqrt(sum);
    printf("\nSquare root of sum of all even elements = %.2f",root);
    printf("\nThe sum of principal diagonal element is %d",sum2);
    
    return 0;
    }
