
#include<stdio.h>
#include"main.h"
/* A program which prints _putchar
* @ main
*  
*/
void _putchar(){
 	char mychar[]="_putchar";		
	for(int i=1;i<=8;i++){
		putchar(mychar[i]);				
	}
}				
int main(){
	_putchar();				
	putchar('\n');				
	return(0);
}
				
						
