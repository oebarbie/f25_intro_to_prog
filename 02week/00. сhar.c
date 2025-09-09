#include <stdio.h>

int main() {

    char greeting1[6] = {'h', 'e', 'l', 'l', 'o', '\0',};
    char greeting2[] = "hello";

    printf("%c\n", greeting1, "%s\n", greeting2);
}