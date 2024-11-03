#include <stdio.h>

int* max(int arr[20], int num);

int main() {
    int i = 0;
    int arr[20];
    int num;
    int *pointer;

    printf("Please enter how many numbers you have: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("Please enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    pointer = max(arr, num);
    printf("The largest number is %d \n", *(pointer));
    printf("The smallest number is %d\n", *(pointer + 1));

    return 0;
}

int* max(int arr[20], int num) {
    static int result[2]; 
    int largest = -999, smallest = 999;
    
    for(int i = 0; i < num; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    result[0] = largest;
    result[1] = smallest;

    return result;
}
