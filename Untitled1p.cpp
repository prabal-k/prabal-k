#include<stdio.h>
#include<string.h>
 
struct emp
 
{
     char name[30];
     int id, salary;
};
 
int main()
{
    struct emp c[3],temp;
    int i=0,j=0,y=0;
    char f[30];
    printf("\n Enter Employee Data:-\n");
    for(i=0;i<3;i++)
    {
        printf("\nEnter name of %d person: ",i+1);
        gets(c[i].name);
        strlwr(c[i].name);
        fflush(stdin);
        printf("Enter ID of %d  person: ",i+1);
        scanf("%d", &c[i].id);
        fflush(stdin);
        printf("Enter Salary of a person: ",i+1);
        scanf("%d", &c[i].salary);
        fflush(stdin);
    }
    printf("\nEnter a person's name that you want to know details: ");
    gets(f);
    strlwr(f);
    fflush(stdin);
 
    for(i=0;i<3;i++)
    {

        if(strcmp(c[i].name,f)==0)    
        {
            y=1;
            printf("\n ID= %d",c[i].id);
            printf("\n salary= %d",c[i].salary);
        }

    }
    if (y!=1)
        {
            printf("\nData isn't available!",f);
        }
    return 0;
}




