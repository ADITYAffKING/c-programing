#include<stdio.h>
int fact(int a);
int main(){
    int a,b;
    printf("enter a  number : ");
    scanf("%d",&a);
    b=fact(a);
    printf("factorial of %d is : %d",a,b);
}
int fact(int a){
    int sum=1;
    for(int i=1;i<=a;i++){
     sum=sum*i;
    }
    return sum;
}