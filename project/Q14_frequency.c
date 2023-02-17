#include<stdio.h>
int main(){
    int a;
    printf("enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
  
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        int count=1;
        for(int j=i+1;j<a;j++){
            if(arr[i]==-326){
                break;
            }
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-326;
            }
        }
        if(arr[i]!=-326){
            printf("frequency of %d is : %d\n",arr[i],count);
        }
    } 
}