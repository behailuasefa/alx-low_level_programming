#include <stdio.h>
int main(){
	for(int i=10;i<=99;i++){
		for(int j=i+1;j<=99;j++){
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	return 0;
}
