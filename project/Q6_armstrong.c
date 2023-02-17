#include<stdio.h>
int main(){
    int a,b,c,d=0;
    printf("enter a number : ");
    scanf("%d",&a);
    b=a;
    while(a!=0){
       c=a%10;
       d=c*c*c+d;
       a=a/10;
    }
    if(d==b)
        printf("%d is a armstrong number",b);
    else{
        printf("%d is not a armstrong number ",b);
    }   
}