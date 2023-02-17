#include<stdio.h>
int main(){
    char str[100];
    printf("enter your string : ");
    fgets(str,100,stdin);
    for(int i=0;str[i+1]!='\0';i++){
        if(str[i]>=97&&str[i]<=122){
            str[i]-=32;
        }
    }
    puts(str);
}