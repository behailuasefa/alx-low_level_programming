#include "main.h"
#include<stdio.h>


/**
 *
 *  * main - calls print_triangle function to print a triangle
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void _putchar(){

	     putchar('#');

}

void print_triangle(int size){

	     for(int i=1;i<=size;++i){

		             for(int j=1;j<=i;++j){

				               _putchar();

					               }

			           printf("\n");

				        }

}

int main(void)

{

	    print_triangle(2);

	        print_triangle(10);

		    print_triangle(1);

		        print_triangle(0);

			    return (0);

}
