#include<stdio.h>

#include<stdlib.h>

/*

*A program to print FizzBuzz

*main: returns 0

*

*/

int main(){

for(int i=1;i<=100;i++){

if(i%3==0)

   printf("Fizz");

else if(i%5==0)

   printf("Buzz");

else if(i%3==0&&i%5==00)

   printf("FizzBuzz");

else

   printf("%d",i);

return(0);

}

}
