#include<stdio.h>
int calculate(int a);
int main(){
    int a,cube;
    printf("enter a number : ");
    scanf("%d",&a);
    cube=calculate(a);
    printf("%d",cube);
}
int calculate(int a){
    a=a*a*a;
    return a;
}