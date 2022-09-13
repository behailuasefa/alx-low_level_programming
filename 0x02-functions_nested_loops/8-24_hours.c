#include "main.h"
#include<stdio.h>
#include<time.h>
/**
 *
 *  * main - calls jack_bauer function
 *
 *   *
 *
 *    * Return: Always 0.
 */

void jack_bauer(){
	time_t rawtime;
	    struct tm* timeinfo;
	        char buffer[80];
		    time(&rawtime);
		        timeinfo = localtime(&rawtime);
			    strftime(buffer, 80,
					    "Time i:", timeinfo);
			        puts(buffer);

}
int main(void)

{

	    jack_bauer();

	        return(0);

}
