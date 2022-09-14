#include<stdio.h>

#include<stdlib.h>

/*Program to compute the sum of even fibonacci numbers*/

int main(){

	long i;

	long sum=0;

	  int t1 = 0, t2 = 1;

	    int next = t1 + t2;

	      printf("Fibonacci Series: %d, %d, ", t1, t2);

	        for (i = 3; i <= 4000000; ++i) {

			    printf("%d, ", next);

			        t1 = t2;

				    t2 = next;

				        next = t1 + t2;

					    sum=sum+next;

					      }

		printf("%lu",sum);

		return(0);

}
