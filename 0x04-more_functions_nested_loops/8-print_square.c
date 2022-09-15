#include "main.h"

#include<stdio.h>

/**
 *
 *  * main - check calls print_square() and prints square
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void _putchar(){

	     putchar('#');

}

void print_square(int size){

	   if(size<=0){

		         putchar('\n');

			    }

	      else{

		           for(int i=1;i<=size;i++){

				           for(int j=1;j<=size;j++){

						             _putchar();

							             }

					           putchar('\n');

						        }

			      }

}

int main(void)

{

	    print_square(2);

	        print_square(10);

		    print_square(0);

		        return (0);

}
