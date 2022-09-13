#include<stdio.h>

#include<ctype.h>

#include"main.h"

/*Program which checks weather alphabet or not*/
int _isalpha(int c){

	int ans=isalpha(c);

	return ans;

}

int main(){
        char c='x';
	int answer=_isalpha(c);

	putchar(answer);

	return(0);

}
