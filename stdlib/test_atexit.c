#include <stdio.h>
#include <stdlib.h>

void functionA ()
{
   printf("This is functionA\n");
}

void functionB ()
{
   printf("This is functionB\n");
}

int main ()
{
   /* register the termination function */
   atexit(functionA);//this funtion willl be execute at the end of the following line of main funtion

   atexit(functionB);
   printf("Starting  main program...\n");

   printf("Exiting main program...\n");
   printf("waiting for function in atexit...\n\n");
   return(0);
}

