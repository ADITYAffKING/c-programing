#include<stdio.h>
int sum(int *arr,int a);
int main(){
    int a,resulted;
    printf("ENTER LIMIT OF ARRAY : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("ENTER %d NUMBER : ",i);
        scanf("%d",&arr[i]);
    }
    resulted=sum(arr,a);
    printf("%d",resulted);
}
int sum(int *arr,int a){
    int add=0;
    for(int i=0;i<a;i++){
       add=add+*arr;
       *arr++;
    }
    return add;
}