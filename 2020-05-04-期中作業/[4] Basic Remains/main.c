#include <stdio.h>
#include <string.h> 

#define SIZE 1000
char p[SIZE + 1], m[10], print[SIZE + 1];
int b, r;

int get10Basic()
{
    int n = 0, i;
    int len = strlen(m);
    for (i = 0; i < len; i ++)
        n = n * b + (m[i] - '0');
    return n;
}

void printbBasic(int n)
{
    int i = 0, j;
    for ( ; n; n /= b)
        print[i ++] = n % b;
    if (i == 0) printf("0");    
    for (j = i - 1; j >= 0; j --)
        printf("%c", print[j] + '0');
    printf("\n");
}

int main()
{
    while (scanf("%d", &b) == 1 && b)
    {
        scanf("%s %s", p, m);
        int len = strlen(p);
        int i;
        r = get10Basic();
        
        int n = 0;
        for (i = 0; i < len; i ++)
        {
            n *= b;
            n += p[i] - '0';
            n %= r;
        }
        printbBasic(n);
    }
    return 0;
}
