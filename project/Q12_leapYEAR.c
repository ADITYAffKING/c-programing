#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number : ");
    scanf("%d",&a);
    b=a%100==0||a%4==0||a%100==0;
    switch(b){
            case 1 : printf("leap year");
                     break;
            default : printf("not a leap year");
    }  
}