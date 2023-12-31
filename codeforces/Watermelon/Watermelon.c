#include <stdio.h>

int main(void) {
    int w;
    scanf("%d", &w);
    if (w > 2 && w % 2 == 0) {
        puts("YES");
    }
    else {
        puts("NO");
    }
}