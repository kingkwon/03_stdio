#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float a, b;
	
	printf(" input a upper integer : ");
	scanf("%f", &a);
	
	printf("\n input a lower integer : ");
	scanf("%f", &b);
	
	printf("\n\n The result is %f\n", a/b);
	
	/*
	int a, b;
	
	printf("input two integers :");
	scanf("%d %d", &a, &b);
	
	printf("result is %f\n", (float)a/b);
	*/
	
	return 0;
}
