/*
 ============================================================================
 Name        : lab7_V00816219.c
 Author      : Micahel Arcilla
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int i , j, k ;
	int x = 1;
	short y = 1;
	long z;


//****With Type short*******************************//
	printf("short%2s",":");
	fflush(stdout);
	for (i = 5; i < 11; i++){
		printf("%20d", i);
		}
	printf("\n");

	for(i = 5; i < 51; i++){
		printf("%d",i);
		if(i < 10){
			printf(" ");
		}
		printf("%5s",":");
		for(j = 5; j < 11; j++){
			for(k = 1; k <= j; k++){
				y *= i;
			}
			printf("%20d",y);
			y = 1;
		}
		printf("\n");
	}
//***********************************************//
	printf("\n\n");


//****With Type int*******************************//
	printf("int%4s",":");
	fflush(stdout);
	for (i = 5; i < 11; i++){

		printf("%20d", i);

	}
	printf("\n");


	for(i = 5; i < 51; i++){
		printf("%d",i);
			if(i < 10){
				printf(" ");
			}
		printf("%5s",":");
		for(j = 5; j < 11; j++){
			for(k = 1; k <= j; k++){
				x *= i;
			}
			printf("%20d",x);
			x = 1;
		}
		printf("\n");
	}
//***********************************************//
	printf("\n\n");


//****With Type long*******************************//
	printf("long%3s",":");
	fflush(stdout);
	for (i = 5; i < 11; i++){
		printf("%20d", i);
		}
	printf("\n");

	for(i = 5; i < 51; i++){
		printf("%d",i);
			if(i < 10){
				printf(" ");
			}
		printf("%5s",":");
		for(j = 5; j < 11; j++){
			for(k = 1; k <= j; k++){
				z *= i;
			}
			printf("%20d",z);
			z = 1;
		}
		printf("\n");
	}
//***********************************************//

	printf("\n\n");
	return EXIT_SUCCESS;
}
