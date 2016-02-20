#include <stdio.h>
#include <stdlib.h>

int main ()
{
   printf("Start of the program....\n");
   
   printf("Exiting the program....\n");
   exit(0);

   printf("End of the program....\n");//this line will not be display because of exit funtion

   return(0);
}
