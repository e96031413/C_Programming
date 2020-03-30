#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int a,b,c,d;
    printf("請輸入三個數字:");
    scanf("%d %d %d",&a,&b,&d);
    c = a%b;
    while( c > 0 )
    {
        a = b;
        b = c;
        c = a%b;
    }
    a = d;
    c = a%b;
    while( c > 0 )
    {
        a = b;
        b = c;
        c = a%b;
    }
    printf("最大公因數:%d\n",b);
}
