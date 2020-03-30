#include <stdio.h>
#include <stdlib.h>


int main()
{
    float a;
    float b;
    float c;


    printf("請輸入初速度:\n",a);
    scanf("%f",&a);
    printf("請輸入加速度:\n",b);
    scanf("%f",&b);
    printf("請輸入時間:\n",c);
    scanf("%f",&c);
    printf("速度為%f",a+b*c);
    return 0;
}
