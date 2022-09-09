#include <stdio.h>
int main(){
	char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i=26;i>0;i--){
		putchar(alphabet[i]);
	}
	putchar('\n');
	return 0;
}
