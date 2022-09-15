#include <stdio.h>
#include "main.h"

/*
 *
 * *main - finds prime factor of 612852475143
 *
 * *
 *
 * *returns 0
 *
 * */

int main() {

	   long int n=612852475143;

	      long int div=2, ans = 0;

	         long int maxFact=564578;

		    while(n!=0) {

			          if(n % div !=0)

					           div = div + 1;

				        else {

						         maxFact = n;

							          n = n / div;

								           if(n == 1) {

										               printf("%lu is the largest prime factor !",maxFact);
											                   ans = 1;

													               break;

														                }

									         }

					   }

		       return 0;

}
