#include <stdio.h>

int main() {
    int x, y, w, h;
    int short_x, short_y;

    scanf("%d  %d %d %d", &x, &y, &w, &h);
    if (x > w / 2) {
        short_x = w - x;
    } else {
        short_x = x;
    }
    if (y > h / 2) {
        short_y = h - y;
    } else {
        short_y = y;
    }
    if (short_x > short_y)
        printf("%d", short_y);
    else
        printf("%d", short_x);
}