#include <stdio.h>

int main() {

    char my_string[100];
    scanf("%s", &my_string); 
    
    //"[^\n]" - for reading the whole line
    // you can not give a reference (&) because an array is already a reference. string is an array of chars.

    int end = 0;
    for (int i=0; i<=100; ++i) { // the first is for defying a new variable
        if (my_string[i] == '\0') {
            end = i;
            break;
        }
    }

    for (int i=end-1; i>=0; --i) {
        printf("%c", my_string[i]);
    }
}