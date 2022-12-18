#include<stdio.h>
#include<string.h>
void revSTRING(char *str);
void rev(char *ptr);
int main(){
    char str[100];
    printf("ENTER A STRING : ");
    fgets(str,100,stdin);
    rev(str);
    // revSTRING(str);
    puts(str);
}
void rev(char *ptr){
    char store;
    int a=strlen(ptr)-1;
    for(int i=0;i<=a/2;i++){
    store =*(ptr+i);
    *(ptr+i)=*(ptr+a-i);
    *(ptr+a-i)=store;
    }
}
void revSTRING(char *str){
   strrev(str);
}