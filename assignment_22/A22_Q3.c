#include<stdio.h>
#include<string.h>
int calSTRINGlength(char *ptr);
int stringSIZE(char *ptr);
int main(){
    int strSIZE;
   char str[100];
   printf("enter your string : ");
   fgets(str,100,stdin);
   
   
  
//    strSIZE=stringSIZE(str);
   strSIZE=calSTRINGlength(str);
   printf("%d",strSIZE);
}
int calSTRINGlength(char *ptr){
    int i;
    for(i=0;*ptr!='\0';i++){
        *ptr++;
    }
    return (i-1);
}
int stringSIZE(char *ptr){
    return (strlen(ptr)-1);
}