#include "main.h"

#include<stdio.h>



/**
 *
 *  * main - calls print_times_table(int n) function
 *
 *   *
 *
 *    * Return: zero.
 *
 *     */



void print_times_table(int n){

	for(int i=0;i<=n;i++){

		for(int j=0;j<=n;j++){

			putchar(i*j);

			putchar(' ');

		}

	}

}

int main(void)

{

	    int n;

	        scanf("%d",&n);

		    if(n<15&&n>0){

			        print_times_table(n);

		    }

		        return(0);

}
