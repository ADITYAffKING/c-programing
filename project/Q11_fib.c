#include<stdio.h>
int fib(int a);
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    fib(a)?printf("number is present"):printf("number is not present");
}
int fib(int a){
    int b=0,c=1,d;
      for(int i=1;;i++){
           d=b+c;
           c=b;
           b=d;
         if(d==a){
            return 1;
         } 
         if(d>a){
            return 0;
         }
      }
}