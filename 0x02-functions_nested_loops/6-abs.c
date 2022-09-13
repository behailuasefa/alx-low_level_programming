#include "main.h"

#include <stdio.h>

#include <stdlib.h>



/**
 *
 *  * main - calls _abs function
 *
 *  Return: Always zero
 *
 * _abs - Compute absolute value
 *
 *Return computed integer
 **/
int main(void)

{	    
  int r;
  r = _abs(-1);
 printf("%d\n", r);
 r = _abs(0);
 printf("%d\n", r);
 r = _abs(1);
 printf("%d\n", r);
 r = _abs(-98);
 printf("%d\n", r);
 return (0);
}

int _abs(int n){

	int x=abs(n);

	return x;

}
