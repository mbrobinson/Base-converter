#include <stdio.h>
#include <ctype.h>

void main(void)
{
   char base_digits[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

   int convertedn[64];
   long int ntc;
   int next_digit, base, index=0;

   
   printf("\n\nPlease enter your number and a space, \nfollowed by the base you would like it to convert to:  ");
   scanf("%ld %i", &ntc, &base);

   /* conversion process. */
   while (ntc != 0)
   {
	 convertedn[index] = ntc % base;
	 ntc = ntc / base;
	 ++index;
   }

   
   --index;  
   printf("\n\nWololoo! successful number conversion = ");
   for(  ; index>=0; index--) 
   {
	 printf("%c", base_digits[convertedn[index]]);
   }
   printf("\n");
}
