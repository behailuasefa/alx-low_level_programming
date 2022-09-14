#include<stdio.h>

#include<stdlib.h>

/* A program to compute the first 98 fibonacci numbers */

int main(){

	int i;

	  int t1 = 0, t2 = 1;

	    int next= t1 + t2;

	      printf("Fibonacci Series: %d, %d, ", t1, t2);

	        for (i = 3; i <= 98; ++i) {

			    printf("%d, ", next);

			        t1 = t2;

				    t2 = next;

				        next = t1 + t2;

					  }

		return(0);

}
