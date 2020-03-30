#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    for(a=1;a<10;a++)
    {
        for(b=1;b<10;b++)
        {
            printf(" %d*%d = %2d ",a,b,a*b);
        }
    }
    return 0;
}
