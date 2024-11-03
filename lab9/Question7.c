#include <stdio.h>
#include <string.h>

int str_sorter(char arr[10][20], int num);

int main() {
    int num, i;
    char input_arr[10][20];

    printf("Please enter how many words you have: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("Please enter word number %d: ", i + 1);
        scanf("%s", input_arr[i]);
    }

    str_sorter(input_arr, num);
    
    printf("Sorted words:\n");
    for (i = 0; i < num; i++) {
        puts(input_arr[i]);
    }

}

int str_sorter(char arr[10][20], int num) {
    int i, j;
    char temp[20];

    for (i = 0; i < num - 1; i++) {
        for (j = i + 1; j < num; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
