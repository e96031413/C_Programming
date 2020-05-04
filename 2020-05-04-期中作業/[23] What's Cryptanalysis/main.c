#include <stdio.h>
#include <ctype.h>

struct Word
{
    char ch;
    int count;
};

struct Word w[26], c;
int index = 0, repeatIndex ;

int check(char ch)
{
    for (repeatIndex = 0; repeatIndex < index; repeatIndex ++)
    {
        if (w[repeatIndex].ch == ch)
           return 0;
    }
    return 1;
}

void insert(char ch)
{
    int i; 
    if (check(ch))
    {
       w[index].count = 1, w[index].ch = ch;
       index ++;
       for (i = index - 1; i >= 1; i --)
           if (w[i].ch < w[i - 1].ch && w[i].count >= w[i - 1].count)
              c = w[i], w[i] = w[i - 1], w[i - 1] = c;
           else break;   
    }
    else 
    {
         w[repeatIndex].count ++;
         for (i = repeatIndex; i >= 1; i --)
             if (w[i].count > w[i - 1].count || 
                 w[i].count == w[i - 1].count && w[i].ch < w[i - 1].ch)
                 c = w[i], w[i] = w[i - 1], w[i - 1] = c;
             else break;    
    }
}

void print()
{
    int i;
    for (i = 0; i < index; i ++)
        printf("%c %d\n", w[i].ch, w[i].count);
}

int main()
{
    int n, i, lineCount = 0;
char ch;
scanf("%d", &n);
getchar();
while (1)
{
    ch = getchar();
    if (isalpha(ch))
    {
       ch = toupper(ch);
       insert(ch);
    }
    /* printf("%c", ch); */
    if (ch == '\n')
    {
       lineCount ++;
       if (lineCount == n)
       { 
           print();
           break;
       }
    }
}
    return 0;
}
