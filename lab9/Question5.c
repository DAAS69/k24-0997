#include<stdio.h>
#include<string.h>
int revstring(char arr[20]);
int main(){
int i=0,j=0,x=0;
char input_str[20];
printf("Please enter the string and i will reverse it: ");
scanf("%s",input_str);
revstring(input_str);
printf("%s",input_str);

}
int revstring(char arr[20]){
strrev(arr);
}
