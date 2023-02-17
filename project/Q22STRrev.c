#include<stdio.h>
#include<string.h>
void reverse(char *a);
int main(){
    char str[100];
    printf("enter a string : ");
    fgets(str,100,stdin);
    char *ptr = str;
    reverse(ptr);
    puts(str);
}
void reverse(char *str){
        int a=strlen(str);
        char store,*ptrEND=&str[a-1];
       
        char *ptrBEG=str;
        for(int i=0;i<a/2;i++){
            store=*ptrBEG;
            *ptrBEG=*ptrEND;
            *ptrEND=store;
            *ptrEND--;
            *ptrBEG++;
        }       
} 