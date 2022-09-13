#include<stdio.h>
#include "main.h"

/* A program which prints alphabet letters

*by calling print_alphabet function

*
*
* *@ main */
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
	print_alphabet();
	putchar('\n');
	return(0);
}
