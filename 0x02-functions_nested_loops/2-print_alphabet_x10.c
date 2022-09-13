#include<stdio.h>

#include "main.h"
/*
 *A program which prints alphabet letters

*by calling print_alphabet function*/
void _putchar(){

	char mychar[]="abcdefghijklmnopqrstuvwxyz";

	for(int i=1;i<=26;i++){

		putchar(mychar[i]);
	}
	}
void print_alphabet(){

		_putchar();
}
int main(){

	for(int i=1;i<=10;i++){

		print_alphabet();

		putchar('\n');

	}

	putchar('\n');

	return(0);

}
