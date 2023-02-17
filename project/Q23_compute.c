#include<stdio.h>
int sum(int *store,int size);
int main(){
   int a,store; 
   printf("enter number of elements : ");
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   }
   int *ptr = arr; 
   store = sum(ptr,a);
   printf("%d",store);
}
int sum(int *ptr,int size){
    int store=0;
    for(int i=0;i<size;i++){
           store=store+*ptr;
           *ptr++;
    }
    return store;
}
