#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][3],i=0,j=0;
    printf("enter the 6 coordinates:");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    printf("\nthe matrix is:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    getch();
}
