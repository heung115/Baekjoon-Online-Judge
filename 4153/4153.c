#include <stdio.h>

int main() {
    int x, y, z;
    int max;
    int ans[100] = {0};
    int i = 0;
    while (1) {
        scanf("%d %d %d", &x, &y, &z);
        max = x;
        if (x == 0 && y == 0 && z == 0) {
            ans[i] = -1;
            break;
        }
        if (y > max) {
            max = y;
        }
        if (z > max) {
            max = z;
        }
        if (max == x) {
            if (y * y + z * z == x * x)
                ans[i] = 1;
            else
                ans[i] = 0;
        } else if (max == y) {
            if (y * y == z * z + x * x)
                ans[i] = 1;
            else
                ans[i] = 0;
        } else {
            if (x * x + y * y == z * z)
                ans[i] = 1;
            else
                ans[i] = 0;
            ;
        }
        i++;
    }
    int k = 0;
    while (ans[k] != -1) {
        if (ans[k] == 1)
            printf("right\n");
        else
            printf("wrong\n");
        k++;
    }
    return 0;
}