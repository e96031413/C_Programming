#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("Hello World!\n");
	printf("Please input 2 numbers:\n");
	scanf("%f,%f", &a ,&b);
	printf("\na=%.1f,b=%.1f\n", a,b); 		/* 顯示輸入的數字a,b */
	printf("a + b =%.1f\n", a+b);			/* 顯示a+b */
	printf("a - b =%.1f\n", a-b);			/* 顯示a- b*/
	printf("a * b =%.1f\n", a*b);			/* 顯示a*b*/
	printf("a / b =%.1f\n", a/b);			/* 顯示a/b */
	printf("a的b次方=%.1f\n", pow(a,b));	/* 顯示a的b次方 */ 
	printf("b的a次方=%.1f\n", pow(b,a));	/* 顯示b的a次方 */ 
	system("PAUSE");
	return 0;
}
