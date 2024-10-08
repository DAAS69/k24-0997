#include <stdio.h>
int main() {
    int n=5; 
    char ch;    

    for (int i = 0; i < n / 2 + 1; i++) {
        ch = 'A' + i;
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = i; j < n - i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        ch = 'A' + i;
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = i; j < n - i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }

}
