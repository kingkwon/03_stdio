#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i;
	char c;
	
	printf(" input an alphabet : ");
	scanf("%c", &c);
	
	i = c + 1;
	printf("\n This is a next alphabet : %c\n", i);
	printf("\n input alphabet is %c (%d), the next one is %c (%d)\n", c, c, c+1, c+1);
	
	return 0;
}
