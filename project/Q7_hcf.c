#include<stdio.h>
int calculate(int a,int b);
int main(){
    int a,b,hcf;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    hcf=calculate(a,b);
    printf("hcf of a and b is : %d",hcf);
}
int calculate(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}