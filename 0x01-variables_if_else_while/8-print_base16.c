#include <stdio.h>
int main(){
	char hexa[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	for(int i=0;i<16;i++){
		putchar(hexa[i]);
	}
	putchar('\n');
	return 0;
}
