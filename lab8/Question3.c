#include<stdio.h>
int main(){
    int arr[10][10];
    int i=0,j=0,k=0,largest=-9999,smallest,column=0,input;
    printf("Please enter your number of rows and columns for your matrix: ");
    scanf("%d",&input);

    for(i=0;i<input;i++){
        for(j=0;j<input;j++){
            printf("Please enter the element for row %d and column %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        smallest=9999;
        for(j=0;j<3;j++){

            if(arr[i][j]<smallest){
                smallest = arr[i][j];
                column=j;
            }

        }
        for(k=0;k<3;k++){

            if(arr[k][column]>largest){
                largest = arr[k][column];
            }

        }
        if(smallest==largest){
            printf("%d\n",largest);
    
        }
    }
    if(smallest!=largest){
            printf("No saddle points present in your matrix");
    
    }

}
