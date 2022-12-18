#include<string.h>
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    printf("ENTER 1ST STRING : ");
    fgets(str1,100,stdin);
    printf("ENTER 2ND STRING : ");
    fgets(str2,100,stdin);
    int d=strcmp(str1,str2);
    
    if(d==0){
        printf("true");
    }
    else{
        printf("false");
    }
}