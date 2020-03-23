#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	char var1;
	printf("input your score:");
	scanf("%d",&num);
	if (num >=90 &&  num<= 100){
		var1 = 'A';
	} 
	else if (num>=80 && num<= 89){
		var1 = 'B';
	}
	else if (num>=70 && num<= 79){
		var1 = 'C';
	}
	else if (num>=60 && num<= 69){
		var1 = 'D';
	}
	else if (num>=0 && num<= 59){
		var1 = 'E';
	}
	
	switch(var1){
		case 'A':
			printf("A¯Å");
			break;
		case 'B':
			printf("B¯Å");
			break;
		case 'C':
			printf("C¯Å");
			break;
		case 'D':
			printf("D¯Å");
			break;
			
		case 'E':
			printf("E¯Å");
			break;
			}	
}

