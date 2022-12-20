#include<string.h>
#include<stdio.h>
int compare(char str1[],char str2[]);
int main(){
    char str1[100],str2[100];
    printf("ENTER 1ST STRING : ");
    fgets(str1,100,stdin);
    printf("ENTER 2ND STRING : ");
    fgets(str2,100,stdin);
    
    int check=compare(str1,str2);
    
    switch(check){

        case 0 : printf("strings are not equal ");
                 break;
        default : printf("strings are equal ");
                 break;

    }
}
int compare(char str1[],char str2[]){
  for(int i=0;str1[i-1]!='\0';i++){
   if(str1[i]!=str2[i]){
    
    return 0;
   
   }
   if(str1[i]=='\0'){
       return 1;
   }
  }
}
