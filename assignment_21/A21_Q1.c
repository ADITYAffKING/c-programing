#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int a;
    printf("ENTER STRING : ");
    fgets(str,100,stdin);
    a=strlen(str);
    printf("%d",a-1);
}