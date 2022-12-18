#include<stdio.h>
int main(){
    char ch,str[100];
    int count=0;
    printf("enter a string : ");
    fgets(str,100,stdin);
    printf("enter the character for which you want to check in string : ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
    if(str[i]==ch){
        count++;
    }
    }
    printf("frequency of  %c  in string is : %d",ch,count);
}