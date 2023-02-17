#include<stdio.h>
void prime(int a,int b);
int main(){
    int a,b;
    printf("enter the range : ");
    scanf("%d%d",&a,&b);
    prime(a,b);   
}
void prime(int a,int b){
    for(int i=a;i<=b;i++){
        for(int j=2;j<=i;j++){
            if(j==i){
            printf("%d\t",j);
           }
           if(i%j==0){
            break;
           }
          
        }
    }
}