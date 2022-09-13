#include<stdio.h>

#include<ctype.h>

#include"main.h"

/*Program which checks weather lower or upper*/
int _islower(int c){

	int ans=islower(c);

	return ans;

}

int main(){
        char c='x';
	int answer=_islower(c);

	putchar(answer);

	return(0);

}
