#include<stdio.h>
int max(int *ptr1,int *ptr2);
int main()
{
    int a,b,c;
    printf("ENTER 1ST NUMBER : ");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER :");
    scanf("%d",&b);
    int *ptr1=&a;
    int *ptr2=&b;
    c=max(ptr1,ptr2);
    printf("%d is grater",c);
}
int max(int *ptr1,int *ptr2){
    if(*ptr1>*ptr2){
        return *ptr1;
    }
    else{
        return *ptr2;
    }
    
}