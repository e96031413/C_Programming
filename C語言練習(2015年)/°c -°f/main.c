#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;

    printf("請輸入攝氏溫度:\n");
    scanf("%f",&a);
    printf("華氏溫度:%.1f",1.8*a+32);
    return 0;
}
