#include <stdio.h>

// my solution
int main() {

    int n;
    scanf("%d", &n);

    int width = 2*n-1;
    int pr = width/2+1;
    int st = 1;

    for (int i=0; i<n; i++) {
        for (int x=0; x<pr; x++) printf(" ");
        for (int y=0; y<st; y++) printf("*");
        for (int x=0; x<pr; x++) printf(" ");
        printf("\n");
        st += 2;
        pr -= 1;
    }
}