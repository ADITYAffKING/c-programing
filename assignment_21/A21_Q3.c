#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0;
    printf("enter a string : ");
    fgets(str,100,stdin);
    strupr(str);
    for(int i=0;str[i]!=0;i++){
      if(str[i]=='A'||str[i]=='U'||str[i]=='O'||str[i]=='I'||str[i]=='E'){
        count++;
      }
    }
    printf("NUMBER OF VOWELS ARE : %d",count);
}