#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    int number[10] = {9,3,2,5,1,4,8,7,6,10};
    int i = 0, j = 0;
    int temp = 0;

    for( i = 0; i < 10; i++) {
        for( j = i; j < 10; j++) {
            if( number[j] < number[i] ) {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }

    for( i = 0; i < 10; i++ ) {
        printf("%d ", number[i]);
    }

return 0;
}

