#include<stdio.h>
int main(){
int i=65;
for (i;i<71;i++){
if(i==65 || i==70){
printf("%c %c %c %c %c\n",i,i+1,i+2,i+3,i+4);
}
else{
printf("%c       %c\n",i, i+4);
}
}
}
