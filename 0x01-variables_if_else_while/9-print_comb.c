#include <stdio.h>
int main(){
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	return 0;
}
