#include<stdio.h>
int main(){
    int start,end,i=0,x=0,flag=0,count=0;
    printf("Please enter the starting range: ");
    scanf("%d",&start);
    printf("Please enter the ending range: ");
    scanf("%d",&end);
    for(i=start;i<end;i++){
        flag=1;
        for(x=2;x*x<=i;x++){
            if((i%x==0)){
                flag=0;
                break;
            }
        }
        if(flag){
            printf("prime number: %d\n",i);
            count++;
        }
    }
    if(count==0){
        printf("No prime number exist in the given range");

    }
}
