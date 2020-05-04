#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//  [3] Polygon


int main(int argc, char *argv[]) {
	
	float r;
	float n;
	float area;
	float pi = 3.14159265;
	printf("Please input the radius'r' where (0<r<20000)\n");
	scanf("%f", &r);
	printf("Please input the sides of the polygon 'n' where (2<n<20000)\n");
	scanf("%f", &n);
	
	printf("Area is %.3f", 0.5*sin(2*pi/n)*n*r*r);
	
	// 正n邊形面積公式 = 0.5*sin(2π/n)*n*R*R	
		
	return 0;
}
