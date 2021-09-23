#include<stdio.h>
#include<conio.h>
int main()
{
	float temperature[30], tmp,*p;
	int n,i,j;
	p=temperature;
	printf("Input the amount of days to be entered: ");
    scanf("%d", &n);
	printf("\nInput %d temperature in the array(°C):\n",n);
    for(i=0;i<n;i++)
        {
	      printf("Day %d : ",i+1);
	      scanf("%f",p+i);
	    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(p+j) < *(p+i))
            {
                tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
    }
    printf("\nThe given temperature in sorted ascending order:\n\n");
    for(i=0;i<n; i++)
    {
        printf("%4f\t", *(p+i));
    }
	        return 0;
}
