#include <stdio.h>
#include <stdlib.h>
#define MAX 32767
#define WORD "This is a test!" 
#define AREA(w, h) ((w)*(h))
#define POWER(i) ((i)*(i)*(i))
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_matrix(int A[]);

void swap(int*, int*);

struct mydata{
	char name[15];
	int score;
};
struct mydata teacher ={"Apric", 90};

int main(void) {
	/* define 用法 */ 
	int i = 5;
	printf("%d \n", MAX);
	printf(WORD "\n");
	printf("area= %d \n", AREA(5,3));
	printf("%d * %d * %d = %d \n", i+1, i+1, i+1, POWER(i+1));
	return 0;
	
	/*  陣列  + define 用法 */ 
	int data[SIZE] = {23,25,28,29,27};
	printf_matrix(data);
	return 0;	
	
	/* char 字串 */ 
	char name[15];
	printf("What's your name?\n'");
	scanf("%s", name);
	printf("Hi! %s. How are you?\n", name);
	return 0;
	
	/* pointer 用法*/
	int a=3, b=5;
	printf("交換前: %d, %d", a, b);
	printf("\n");
	swap(&a, &b);
	printf("交換後: %d, %d", a, b);
	return 0;	
	
	
	/* struct 用法 */ 
	struct mydata student;
	
	printf("Name: ");
	scanf("%s", student.name);
	printf("Score: ");
	scanf("%d", &student.score);
	printf("%s got %d points! \n", student.name, student.score);
	return 0;	 
}


void printf_matrix(int A[])
{
	int i;
	for (i=0; i<SIZE; i++){
		printf("%d", A[i]);
	printf("\n");
	return;
	}
}


void swap(int *x, int *y)
{
	int temp =*x;
	*x = *y;
	*y = temp;
}

