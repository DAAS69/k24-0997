#include <stdio.h>

int main() {
    int start,n,i=0,j=0;
    int arr[2][100][2];
    int current_odd=0,current_even=0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the number of arrays (n): ");
    scanf("%d", &n);

    current_even=(start % 2 == 0) ? start : start - 1;
    current_odd=(start % 2 != 0) ? start : start - 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 2; j++) {
            arr[0][i][j] = current_even;
            current_even -= 2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            arr[1][i][j] = current_odd;
            current_odd -= 2;
        }
    }

    printf("\nEven Numbers Array [0]:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d, %d]\n", arr[0][i][0], arr[0][i][1]);
    }

    printf("\nOdd Numbers Array [1]:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d, %d]\n", arr[1][i][0], arr[1][i][1]);
    }

}
