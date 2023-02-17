#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE COFFICENT OF X : ");
    scanf("%d",&a);
    printf("ENTER THE COFFICENT OF X^2 : ");
    scanf("%d",&b);
    printf("ENTER THE constant : ");
    scanf("%d",&c);

    if((b*b)-(4*a*c)==0){
        printf("ROOTS ARE EQUAL");
    }
    if((b*b)-(4*a*c)>0){
        printf("ROOTS ARE REAL AND DISTINCT");
    }
    else{
        printf("ROOTS ARE IMAGINARY");
    }
}