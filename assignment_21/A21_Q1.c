#include<stdio.h>
#include<string.h>
int length(char str[100]);
int main(){
    char str[100];
    int size;
    printf("ENTER STRING : ");
    fgets(str,100,stdin);
    // a=strlen(str);
    size=length(str);
    printf("%d",size);
}
int length(char str[100]){
        int i;
        for(i=1;str[i+1]!='\0';i++){
          
        }
        return i;
}
