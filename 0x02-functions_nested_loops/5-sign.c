#include<stdio.h>

#include "main.h"

/*Program to check sign*/
int print_sign(int n){

	if(n>0)

		return 1;

	else if(n<0)

		return -1;

	else return 0;

}

int main(){

	int n=5;

	int ans=print_sign(n);

	if(ans==0)

		putchar('0');

	else if(ans==1)

		putchar('+');

	else;

	putchar('-');
	return(0);


}
