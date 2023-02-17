#include<stdio.h>
void reverse(int *ptr,int size);
int main(){
    int a;
    printf("enter the limit of array : ");
    scanf("%d",&a);
    int arr[a],*ptr=arr;
    printf("enter elements : ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    reverse(ptr,a);
    printf("reverse order is \n");
    for(int i=0;i<a;i++){
        printf("%d\t",arr[i]);
    }
}
void reverse(int *ptr,int size){
    int store;
    int *ptrEnd=&ptr[size-1];
    for(int i=0;i<size/2;i++){
          store=*ptr;
          *ptr=*ptrEnd;
          *ptrEnd=store;
          *ptr++;
          *ptrEnd--;
    }
}