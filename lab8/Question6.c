#include <stdio.h>
int factorial(int n) {
      if(n == 0  || n==1)
      return 1;
    long factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int j,i,k;
    for (i=0;i<5;i++) {
        for(k=0;k<=5-i;k++){
            printf(" ");

        }
        for(j=0;j<=i;j++){
            int n=i;
            printf("%d ", nCr(n, j));
            n++;
        }
        printf("\n");
    }
}
