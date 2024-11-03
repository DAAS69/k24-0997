#include<stdio.h>
#include<string.h>;
int main(){
char input_str[5][20],rev_str[5][20];
int i=0,j=0,x=0,num,len;
printf("How many words do you have: ");
scanf("%d",&num);

for(i=0;i<num;i++){

printf("Please enter word number %d: ",i+1);
scanf("%s",&input_str[i]);
}

for(i=0;i<num;i++){
len=strlen(input_str[i]);
for(j=len-1;j>=0;j--){
rev_str[i][x]=input_str[i][j];
x++;
}
x=0;
if(strcmp(input_str[i],rev_str[i])==0){
printf("%s is a palindrome ",input_str[i]);
}
else {
printf("%s is not a palindrome string",input_str[i]);
}
}
}
