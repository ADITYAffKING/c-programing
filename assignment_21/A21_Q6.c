#include<stdio.h>
void strREVERSE(char str[]);
int main(){
    char str[100];
    printf("enter a string : ");
    fgets(str,100,stdin);
    
    strREVERSE(str);

    
}
void strREVERSE(char str[]){
    int i,j,k;
    char store;

    for(i=0;str[i+1]!='\0';i++){
    }
    k=i/2;

    for(j=0;j<k;j++){
        store=str[i-j-1];
        str[i-j-1]=str[j];
        str[j]=store;
    }
    puts(str);
}
