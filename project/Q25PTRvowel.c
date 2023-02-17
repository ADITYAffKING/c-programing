#include<stdio.h>
void count(char *ptr,int *ptrV,int *ptrC);
int main(){
    int Vcount=0,Ccount=0,*ptrV,*ptrC;
    char str[1000],*ptr;
    printf("enter your string : ");
    fgets(str,100,stdin);
    ptr=str;
    ptrV=&Vcount;
    ptrC=&Ccount;
    count(ptr,ptrV,ptrC);
    printf("total vovels are : %d\n",Vcount);
    printf("total consonents are : %d",Ccount);
}
void count(char *ptr,int *ptrV,int *ptrC){
    for(int i=0;*ptr!='\0';i++){
        if(*ptr>=64&&*ptr<=90||*ptr>=97&&*ptr<=122){

         if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'){
               (*ptrV)++;
         }
         else{
               (*ptrC)++;
         }
        }
        *ptr++;
     }
}