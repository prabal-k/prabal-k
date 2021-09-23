#include<stdio.h>
#include<conio.h>

struct emp
{
  char name[30];
  int id;
  long int salary;

}A[10];

  int main()
   {
      int i=0;
     printf("Enter details of 10 employee");
     for(i=0;i<2;i++)
       {
         printf("Enter name of %d employee",i+1);
         fgets(A[i].name,10,stdin);
          fflush(stdin);
        printf("Enter id of %d person",i+1);
        scanf("%d",&A[i].id);
         fflush(stdin);
        printf("Enter salary of %d person",i+1);
        scanf("%ld",&A[i].salary);
         fflush(stdin);
    }
    
      
 

   
   return 0;

  }
