#include "main.h"

#include<stdio.h>

/**
 *
 *  * main - calls the function print_line()
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void print_line(int n){

	if(n<=0){

		putchar('\n');

	}

	else{

		    for(int i=1;i<=n;i++)

			           putchar('-');

						   }

						      putchar('\n');

						      }

						      int main(void)

						      {

						          print_line(0);

							      print_line(2);

							          print_line(10);

								      print_line(-4);

								          return (0);

						      }
