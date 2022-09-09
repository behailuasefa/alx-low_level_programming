#include <stdio.h>
#include <ctype.h>

int main(){
	char alphabet[]={'a','l','p','h','a','b','e','t'};
	for(int i=0;i<9;i++){
       		 putchar(toupper(alphabet[i]));
	}
	putchar('\n');
	return 0;
}
