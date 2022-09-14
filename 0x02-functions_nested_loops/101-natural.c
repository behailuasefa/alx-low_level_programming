#include<stdio.h>

#include<stdlib.h>

/* Compute multiple of three below 1024 */

int main(){

	long sum=0;

	for(int i=3;i<1024;i+=3){

		sum=sum+i;

	}

	printf("The total is: ""%lu",sum);

	putchar('\n');

	return(0);

}
