#include <stdio.h>
int main(){
	for(int i=0;i<=9;i++){
		for(int j=i+1;j<=9;j++){
			for(int k=j+1;k<=9;k++){
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return 0;
}
