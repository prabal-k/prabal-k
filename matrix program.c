#include<stdio.h>
#include<stdio.h>
int main()
{
    int a[2][2],i=0,j=0;
    printf("enter 4 elements\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1,j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n the matrix is:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;i<=1;j++)
        {
            printf("%d\t",&a[i][j]);
        }
        printf("\n");
    }
    return(0);
}
