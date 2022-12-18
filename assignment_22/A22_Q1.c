#include<stdio.h>
void swap(int *ptra,int *ptrb);
int main(){
    int a,b;
    printf("enter 1st number : ");
    scanf("%d",&a);
    printf("enter 2 nd number : ");
    scanf("%d",&b);
    
    int *ptrA=&a;
    int *ptrB=&b;
    swap(ptrA,ptrB);

    printf("value of a is : %d\n",a);
    printf("value of b is : %d",b);

}
void swap(int *ptra,int *ptrb){
    int store;
    store=*ptra;
    *ptra=*ptrb;
    *ptrb=store;
}