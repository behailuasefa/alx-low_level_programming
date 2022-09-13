#include "main.h"

#include<stdio.h>



/**
 *
 *  * main - calls print_to_98 function
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */
void print_to_98(int n){

	if(n<=98){

		for(int i=n;i<=98;i++){

			putchar(i);

			putchar(',');

			putchar(' ');

		}
	}
		else{

			for(int i=n;i>=98;i--){

				putchar(i);

				putchar(',');

				putchar(' ');

			}

		}

	}
	int main(void)

	{

		    print_to_98(0);

		        print_to_98(98);

			    print_to_98(111);

			        print_to_98(81);

				    print_to_98(-10);

				        return (0);

	}
