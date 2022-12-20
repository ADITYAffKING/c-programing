#include<stdio.h>
#include<string.h>
int main(){
    char  str[100];
    int count=1,a;
    printf("ENTER YOUR STRING : ");
    fgets(str,100,stdin);
    a=strlen(str)-1;
    for(int i=1;str[i]!='\0';i++){

        if(str[i]==32&&i!=0&&i!=a&&str[i+1]!=32){
            count++;
        }
    }
     printf("number of words are : %d",count);
}
