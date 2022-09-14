#include<stdio.h>

#include<stdlib.h>

/*compute the first 50 fibonacci numbers
 *
 * *Main returns zero
 *
 * */

int main(){

	int i, n;

	  int t1 = 0, t2 = 1;

	    int next= t1 + t2;

	      printf("Fibonacci Series: %d, %d, ", t1, t2);

	        for (i = 3; i <= 50; ++i) {

			    printf("%d, ", next);

			        t1 = t2;

				    t2 = next;

				        next = t1 + t2;

					  }

		return(0);

}
