#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("enter string : ");
    fgets(str1,100,stdin);
    strcpy(str2,str1);
    puts(str2);
}