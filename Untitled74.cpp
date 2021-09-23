#include<stdio.h>
#include<process.h>
 
int main()
 {
   FILE *fp1, *fp2;
   char a;
   
 
   fp1 = fopen("C:\\CPROGRAM\\XYZMAIN.txt", "r");
   if (fp1 == NULL) {
      puts("cannot open this file");
      exit(1);
   }
 
   fp2 = fopen("C:\\CPROGRAM\\XYZCOPIED.txt", "w");
   if (fp2 == NULL) {
      puts("Not able to open this file");
      fclose(fp1);
      exit(1);
   }
 
   do {
      a = fgetc(fp1);
      fputc(a, fp2);
   } while (a != EOF);
 
   fcloseall();
   return 0;
}
