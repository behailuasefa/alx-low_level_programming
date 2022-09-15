#include "main.h"

#include<stdio.h>

/**
 *
 *  * main - calls print_most_numbers(void)
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void _putchar(){

	for(int i=0;i<10;i++){

		    if(i==2||i==4){

			        continue;

				    }

		    else{

			        putchar(i);

		    }

	}

	putchar('\n');

}

void print_most_numbers(){

	    _putchar();

}

int main(void)

{

	    print_most_numbers();

	        return (0);

}
