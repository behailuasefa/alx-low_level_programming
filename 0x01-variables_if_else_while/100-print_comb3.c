#include <stdio.h>
int main(){
	for(int i=0;i<=9;i++){
		for(int j=i+1;j<=9;j++){
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	returnn 0;
}
