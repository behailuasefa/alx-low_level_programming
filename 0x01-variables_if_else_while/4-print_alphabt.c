#include <stdio.h>
int main(){
	char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i=0;i<26;i++){
		if(i==4||i==16)
			continue;
		putchar(alphabet[i]);	
	}
}
