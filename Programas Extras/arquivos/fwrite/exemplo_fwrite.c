#include <stdio.h>

int main()
{
   FILE *fp;
   char str[] = "This is tutorialspoint.com";

   fp = fopen("file.txt", "w");
   fwrite(str, 1, sizeof(str), fp);

   fclose(fp);

   return (0);
}