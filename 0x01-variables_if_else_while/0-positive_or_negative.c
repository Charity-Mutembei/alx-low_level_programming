#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** added header for printf
 * main - Entry point
 * int - n
 * if statement checking if the number is positive or not 
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* Print the generated number*/
    printf("The number is: %d\n", n);
    /**
     *  Check if the number is positive,
     *   negative,
     *    or zero and print the appropriate message
     */    
    if (n > 0) {
        printf("The number is positive\n");
    }
    else if (n == 0) {
        printf("The number is zero\n");
    }
    else {
        printf("The number is negative\n");
    }
    return 0;
}
