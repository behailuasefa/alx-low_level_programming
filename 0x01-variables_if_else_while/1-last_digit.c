#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if(n>5)
					printf("Last digit of n is greater than 5\n");
				else if(n==0)
					printf("Last digit of n is 0");
				else if(n<6&&n!=0)
					printf("Last digit of n is less than 6 and not 0\n");

					return (0);

}
