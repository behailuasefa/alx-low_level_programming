#include "main.h"
#include<stdio.h>



/**
 *
 *  * main - prints diagonal line
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void _putchar(){

	    putchar('\\');

	        putchar('\n');

}

void print_diagonal(int n){

	  if(n<=0){

		     putchar('\n');

		       }

	    else{

		         for(int i=1;i<=n;i++){

				         for(int j=1;j<=i;j++){

						           putchar(' ');

							        }

					         _putchar();

						   }

	    }

}

int main(void)

{

	    print_diagonal(0);

	        print_diagonal(2);

		    print_diagonal(10);

		        print_diagonal(-4);

			    return (0);

}
