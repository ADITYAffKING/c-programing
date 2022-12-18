#include<stdio.h>
void rev(int *ptr,int a);
int main(){
    int a;
    printf("enter limit of array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("ENTER %d NUMBER : ",i);
        scanf("%d",&arr[i]);
    }
    a=a-1;
    rev(arr,a);
    for(int i=0;i<=a;i++){
       printf("%d\t",arr[i]);
       
    }
}
void rev(int *ptr,int a){
    int store;
    for(int i=0;i<=a/2;i++){
        store=*(ptr+i);
        *(ptr+i)=*(ptr+a-i);
        *(ptr+a-i)=store;
    }
}