#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int a,b,c,d;
    printf("�п�J�T�ӼƦr:");
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
    printf("�̤j���]��:%d\n",b);
}
