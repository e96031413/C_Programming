#include <stdio.h>
#include <stdlib.h>
int gcd(int x,int y);
int main(void)
{
    int a,b;
    printf("�п�J2�Ʀr�H�D�X�̤j���]�Ƥγ̤p������:");
    scanf("%d,%d",&a,&b);
    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));
    printf("lcm(%d,%d)=%d\n",a,b,(a*b)/gcd(a,b));
    system("PAUSE");
    return 0;
}
int gcd(int x,int y)
{
    if(x!=0&&y!=0)
        return gcd((x>=y)?x%y:x,(x<y)?y%x:y);
    else
        return(x!=0)?x:y;
}
