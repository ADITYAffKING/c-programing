#include<stdio.h>
int main(){
    int count=0,a,sum=0;
    printf("enter 10 positive numbers : ");
    while(count<10){
        scanf("%d",&a);
        if(a>=0){
            sum=sum+a;
            count++;
        }
    }
    printf("sum of all positive number is : %d",sum);
}