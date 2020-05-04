#include <stdio.h>

int main() {
    int i;
    printf("Input your numbers:\n");
    while(scanf("%d", &i) == 1 && i) {
        int ans = 0, tmp = 0;
        int x;
        while(i--) {
            scanf("%d", &x);
            tmp += x;
            if(tmp < 0)
                tmp = 0;
            if(tmp > ans)
                ans = tmp;
        }
        if(ans)
            printf("The maximum winning streak is %d.\n", ans);
        else
            printf("Losing streak.\n");
    }
    return 0;
}
