
#include <stdio.h>

int main(void)
{
   char ch1, ch2;

   scanf("%c", &ch1);  /* Leaves the newline in the input */
   scanf(" %c", &ch2); /* The leading whitespace ensures it's the
                          previous newline is ignored */
   printf("ch1: %c, ch2: %c\n", ch1, ch2);

   /* All good so far */

   char ch3;
   scanf("%c", &ch3); /* Doesn't read input due to the same problem */
   printf("ch3: %c\n", ch3);

   return 0;
}