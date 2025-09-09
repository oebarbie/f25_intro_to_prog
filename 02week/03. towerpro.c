#include <stdio.h>

void isosceles_triangle(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1-i; j++) printf(" ");
        for (int j=0; j<2*i+1; j++) printf("*");
        printf("\n");
    }
}

void rectangle(int n) {
    int width = 2*n-1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<width; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void half_triangle(int n) {
    int width = 2*n-1;
    int pr = width/2+1;
    int st = 1;

    for (int i=0; i<n; i++) {
        for (int y=0; y<st; y++) printf("*");
        for (int x=0; x<pr; x++) printf(" ");
        printf("\n");
        st += 2;
        pr -= 1;
    }
}

void reverse_triangle(int n) {
    int mid = n/2;
    int st = 1;

    for (int i=0; i<=mid; i++) {
        for (int x=0; x<st; x++) printf("*");
        st += 1;
        printf("\n");
    }
    for (int i=0; i<n; i++) {
        for (int x=st; x>0; x--) printf("*");
        st -= 1;
        printf("\n");
    }

}


int main() {

    int n;
    scanf("%d", &n);

    // isosceles_triangle(n);
    // rectangle(n);
    // half_triangle(n);
    reverse_triangle(n);    
}