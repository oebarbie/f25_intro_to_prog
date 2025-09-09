#include <stdio.h>

void swap(int *x, int *y) {

    *x = *x + *y; // x = sum, y = y
    *y = *x - *y; // x = sum, y = x
    *x = *x - *y; // x = y, y = x

}

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("%d %d", a, b);
}