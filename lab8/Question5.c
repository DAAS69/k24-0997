#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("Please enter number or rows for your diamond shape: ");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++){
        for(j=0;j<=(rows-1)-i;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("* ");
        }
        printf("\n");

    }

    for(i=(rows-1);i>0;i--){
        for(j=0;j<rows-i;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("* ");
        }
        printf("\n");

    }
}
