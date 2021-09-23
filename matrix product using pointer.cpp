#include<stdio.h>
 int main()
 {
 	int c,d,e,f,a[10][10],b[10][10],product[10][10],sum=0,i=0,k=0,j=0;
 	printf("enter the number of rows and column of first matrix\t");
 	scanf("%d %d",&c,&d);
 	for(i=0;i<c;i++)
 	{
 		for(j=0;j<d;j++)
 		{
 			printf(" \nenter at a[%d][%d]  ",i,j);
 			scanf("%d",&a[i][j]);
		 }
	 }
	 flag:
	 printf("\nenter the number of rows and column of second matrix\t");
	 scanf("%d %d",&e,&f);
	 if(d!=e)
	 {
	 	printf("\nerror 401...please retry.");
	 	goto flag;
	 }
	 else
	 {
	 	for(i=0;i<e;i++)
	 	{
	 		for(j=0;j<f;j++)
	 		{
	 			printf("\nenter at b[%d][%d] ",i,j);
	 			scanf("%d",&b[i][j]);
			 }
		 }
	 }
	 for(i=0;i<c;i++)
	 {
	 	for(j=0;j<f;j++)
	 	{
	 		for(k=0;k<e;k++)
	 		{
	 			sum=sum+(*(*(a+i)+k))*(*(*(b+k)+j));
			 }
			 (*(*(product+i)+j))=sum;
			 sum=0;
		 }
	 }
	 printf("\nthe product of matrix is\n");
	 for(i=0;i<c;i++)
	 {
	 	for(j=0;j<f;j++)
	 	{
	 		printf("  %d  ",*(*(product+i)+j));
		 }
		 printf("\n");
	 }
	 return 0;
 }
