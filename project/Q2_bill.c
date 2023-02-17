#include<stdio.h>
int main(){
    float a,b=0,c;
    printf("enter units : ");
    scanf("%f",&a);
    if(a>250){
     b=(a-250)*1.5;
     a=250;
    }
    if(a>150){
    b=b+(a-150)*1.2;
    a=150;
    }
    if(a>50){
    b=b+(a-50)*0.75;
    a=50;
    }
    if(a>0&&a<=51){
    b=b+a*0.5;
    }
    c=b*0.2+b;
    printf("your electricity bill if %.2f RS",c);
}