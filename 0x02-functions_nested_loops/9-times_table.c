#include "main.h"

#include<stdio.h>



/**
 *
 *  * main - calls times_table code
 *
 *   *
 *
 *    * Return: A.
 *
 *     */
void times_table(){

	for(int i=0;i<=9;i++){

		for(int j=0;j<=9;j++){

			putchar(i*j);

			putchar(' ');

		}

	}

}
int main(){

	    times_table();

	        return(0);

}
