#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter units : ");
    scanf("%f",&a);
    if(a<=50){
        printf("your bill is : %.2f Rs",a*0.50);
    }
    else if(a<=150){
        b=0.50*50;
        printf("Your bill is %.2f RS",b+(a-50)*0.75);
    }
    else if(a<=250){
        b=0.50*50+(100*0.75);
        printf("your bill is %.2f RS",b+(a-150)*1.20);
    }
    else{
        b=(0.50*50)+(0.75*100)+1.20*100;
        c=b+((a-250)*1.50);
        printf("your bill is %.2f RS",c);
    }
}