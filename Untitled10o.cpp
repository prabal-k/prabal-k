#include<stdio.h>
#include<stdlib.h>
struct record
{
	char student_name[20];
	int student_roll;
	int student_marks;
};
int main()
{
	FILE *p;
	int i=0,a,x;
	struct record s[4];
	p=fopen("C:\\CPROGRAM\\student.dat.txt","w+");
	if(p==NULL)
	{
		printf("\nFILE NOT FOUND ");
	}
	printf("\nenter the details");
	for(i=0;i<3;i++)
	{
		gets(s[i].student_name);
		fflush(stdin);
		scanf("%d",&s[i].student_roll);
		fflush(stdin);
		scanf("%d",&s[i].student_marks);
		fflush(stdin);
	 } 
	 fwrite(s,sizeof(s),1,p);
	 printf("\nenter the roll number whose detail you want to search ");
	 scanf("%d",&a);
	 for(i=0;i<3;i++)
	 {
	 	x=0;
	 	if(s[i].student_roll==a)
	 	{
	 		x=1;
	 		printf("\nNAME=%s  roll=%d   marks=%d",s[i].student_name,s[i].student_roll,s[i].student_marks);
		 }
	 }
	 if(x==0)
	 {
	 	printf("\ndetails not found");
	 }
	 fclose(p);
}
