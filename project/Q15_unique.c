#include<stdio.h>
int main(){
    int a;
    printf("enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
  
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("unique elements are : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[i]==arr[j]&&i!=j){
                break;
            }
            if(j==a-1){
                printf("%d\n",arr[i]);
            }
        }
    }
}
   