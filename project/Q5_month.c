#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number of month : ");
    scanf("%d",&a);
    switch(a){
    case 1 : printf("january have 31 days"); break;
    case 2 : printf("fabruary have 28 days and in leaf year fabruary have 29 days");
             break;
    case 3 : printf("march have 31 days ");
             break;
    case 4 : printf("aprail have 30 days");
             break;
    case 5 : printf("may have 31 days");
             break;
    case 6 : printf("june have 30 days");
             break;
    case 7 : printf("july have 31 days");
             break;
    case 8 : printf("august have 31 days");
             break;
    case 9 : printf("september have 30 days");
             break;
    case 10 : printf("october have 31 days");
             break;
    case 11 : printf("november have 30 days");
             break;
    case 12 : printf("december have 31 days");
             break;
    
    
    
    }
}