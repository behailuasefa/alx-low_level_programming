#include "main.h"

#include <stdio.h>

#include<ctype.h>



/**
 *
 *  * main - check thEe letter c weather it is upper or not.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int _isupper(int c){

	if(isupper(c))

		   return(1);

	else 

		   return(0);

}



int main(void)

{

	    char c;

	        c = 'A';

		    printf("%c: %d\n", c, _isupper(c));

		        c = 'a';

			    printf("%c: %d\n", c, _isupper(c));

			        return (0);

}
