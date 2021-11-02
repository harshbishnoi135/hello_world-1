#include <stdio.h>
#include <string.h>
// #include <header.h>  

int main () {
   char src[50];
   char dest[4];
//    printf("");
   strcpy(src, "Trying to do my best in PP-subject");
   strncpy(dest, src, 1);
   printf("Required string : %s\n", dest);
   return(0);
}