#include<stdio.h>
void stringcopy(char str1[]);
int main(){

    char str1[100];
    printf("enter string : ");
    fgets(str1,100,stdin);
    stringcopy(str1);
 
}
void stringcopy(char str1[]){
      
       char str2[100];
        int i;
       for(i=0;str1[i]!='\0';i++){

          str2[i]=str1[i];
       }
    
        puts(str2);

}
