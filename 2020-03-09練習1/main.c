#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("Hello World!\n");
	printf("Please input 2 numbers:\n");
	scanf("%f,%f", &a ,&b);
	printf("\na=%.1f,b=%.1f\n", a,b); 		/* ��ܿ�J���Ʀra,b */
	printf("a + b =%.1f\n", a+b);			/* ���a+b */
	printf("a - b =%.1f\n", a-b);			/* ���a- b*/
	printf("a * b =%.1f\n", a*b);			/* ���a*b*/
	printf("a / b =%.1f\n", a/b);			/* ���a/b */
	printf("a��b����=%.1f\n", pow(a,b));	/* ���a��b���� */ 
	printf("b��a����=%.1f\n", pow(b,a));	/* ���b��a���� */ 
	system("PAUSE");
	return 0;
}
