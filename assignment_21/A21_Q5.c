#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string : ");
    fgets(str,100,stdin);
    
    // strlwr(str);
    
    for(int i=0;str[i]!='\0';i++){
     if(str[i]>=65 && str[i]<=90){
        str[i]=str[i]+32;
     }
    }
    puts(str);
}