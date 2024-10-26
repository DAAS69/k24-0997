#include <stdio.h>
int main() {
    int i,j,k; 
    int arr[5][5];

    for (i=0;i<5;i++) {
        for(k=0;k<=5-i;k++){
            printf(" ");

        }
        for (j=0;j<=i;j++) {
            if (j==0 || j==i) {
                arr[i][j] = 1;
            } 
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
