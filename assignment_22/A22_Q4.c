#include<stdio.h>
#include<string.h>
void counter(char *ptr,int *vcount,int *ccount);
int main(){
    int a=0;
    int b=0;
    int *Vcount=&a,*Ccount=&b;
    char arr[100];
    printf("enter a string : ");
    fgets(arr,100,stdin);
    counter(arr,Vcount,Ccount);
    printf("VOVELS IN STRING : %d",*Vcount);
    printf("\nNUMBER OF CONSONANTS IN STRING : %d",*Ccount);
}
void counter(char *ptr,int *vcount,int *ccount){
    strupr(ptr);
    int count=0,Ccount;
    for(int i=0;*ptr!='\0';i++){
      if(*ptr=='A'||*ptr=='O'||*ptr=='I'||*ptr=='E'||*ptr=='U'){
            (*vcount)++;
        }
        else if(*ptr>='A' && *ptr<='Z'){
            (*ccount)++;
        }
        else{

        }
        *ptr++;
    }
    
}