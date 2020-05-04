#include <stdio.h>
#include <ctype.h>
#define SIZE 37
int index, best[SIZE];
int money[SIZE];

int getMoney(int n, int base)
{
    int nMoney = 0;
    for (; n; n /= base)
    {
        nMoney += money[n % base];
    }
    return nMoney;
}

int main()
{
    int n, i, m, j, k, min, count, caseNum;
    scanf("%d", &n);
    for (caseNum = 1; caseNum <= n; caseNum ++)
    {
        if (caseNum != 1) printf("\n");
        index = 0; 
        for (i = 0; i < 36; i ++)
            scanf("%d", &money[i]);
        printf("Case %d:\n", caseNum);
        scanf("%d", &m);
        for (i = 0; i < m; i ++)
        {
            scanf("%d", &k);
            index = 0;
            min = getMoney(k, 2);
            best[index ++] = 2;
            for (j = 3; j <= 36; j ++)
            {
                count = getMoney(k, j);
                if (min == count) best[index ++] = j;
                if (min > count) min = count, index = 0, best[index ++] = j;
            }
            printf("Cheapest base(s) for number %d:", k);
            for (j = 0; j < index; j ++)
                printf(" %d", best[j]);
            printf("\n");
        }
    }
    return 0;
}
