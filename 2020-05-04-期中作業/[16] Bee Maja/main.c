#include <stdlib.h>
 
#define SIZE 100000
 
struct point
{
    int x, y;
};
struct point p[SIZE + 1];
int index;
void create()//�ɤO�k�ت�
{
    p[1].x = 0, p[1].y = 0;
    index = 2;
    int nowI = 0, nowJ = 0, count, num;
    for (num = 1; index <= SIZE; num ++)
    {
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//�U
            p[index].x = nowI, p[index].y = ++ nowJ;
        for (count = 0; count < num - 1 && index <= SIZE; count ++, index ++)//���U �C������O�H��1 �ҥH�Ĥ@���S��
            p[index].x = -- nowI, p[index].y = ++ nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//�W
            p[index].x = -- nowI, p[index].y = nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//�k�W
            p[index].x = nowI, p[index].y = -- nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//�k
            p[index].x = ++ nowI, p[index].y = -- nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//�k�U
            p[index].x = ++ nowI, p[index].y = nowJ;
    }
}
 
int main()
{
    create();
    int n;
        
    while (scanf("%d", &n) == 1)
        printf("%d %d\n", p[n].x, p[n].y);
}
