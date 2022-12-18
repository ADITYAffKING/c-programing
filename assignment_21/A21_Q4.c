#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string : ");
    fgets(str,100,stdin);
    // strupr(str);
    for(int i=0;str[i]!='\0';i++){
     if(str[i]>=97 && str[i]<=122){
        str[i]=str[i]-32;
     }
    }
    puts(str);
}