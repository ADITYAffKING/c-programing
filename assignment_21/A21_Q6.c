#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string : ");
    fgets(str,100,stdin);
    strrev(str);
    puts(str);
}