#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    int *ptra=&a;
    int *ptrb=&b;
    swap(ptra,ptrb);
    printf("value of a is : %d\n",a);
    printf("value of b is : %d",b);

}
void swap(int *a,int *b){
           int store;
           store=*a;
           *a=*b;
           *b=store;
}