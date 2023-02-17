#include<stdio.h>
int main(){
    int Vcount=0,Ccount=0,*ptrv,*ptrC;
    char str[1000],*ptr;
    printf("enter your string : ");
    fgets(str,100,stdin);
    ptr=str;
    for(int i=0;*ptr!='\0';i++){
        if(*ptr>=64&&*ptr<=90||*ptr>=97&&*ptr<=122){

         if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'){
               Vcount++;
     
         }
         else{
                Ccount++;
         }
        }
        *ptr++;
     }
    printf("total vovels are : %d\n",Vcount);
    printf("total consonents are : %d",Ccount);
}