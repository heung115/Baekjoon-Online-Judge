#include <stdio.h>

int main() {
    int x, y, z;
    int ans[100] = {0};
    int i = 0;
    int k = 0;
    scanf("%d %d %d", &x, &y, &z);
    while (1) {
        if (x == 0 && y == 0 && z == 0) {
            ans[i] = -1;
            break;
        } else if (x * x + y * y == z * z) {
            ans[i++] = 1;
        } else {
            ans[i++] = 0;
        }
        scanf("%d %d %d", &x, &y, &z);
    }
    while (ans[k] != -1) {
        if (ans[k] == 1)
            printf("right\n");
        else
            printf("wrong\n");
        k++;
    }
}