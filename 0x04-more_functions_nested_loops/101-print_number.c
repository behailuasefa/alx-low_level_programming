#include "main.h"
#include<ctype.h>
#include<stdio.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void _putchar(char c){

	      int ans=isdigit(c);

	            if(ans){

			             putchar(c);

				           }     

}

void print_number(int n){

	     _putchar(n);

}

int main(void)

{

	    print_number(98);

	        _putchar('\n');

		    print_number(402);

		        _putchar('\n');

			    print_number(1024);

			        _putchar('\n');

				    print_number(0);

				        _putchar('\n');

					    print_number(-98);

					        _putchar('\n');

						    return (0);

}
