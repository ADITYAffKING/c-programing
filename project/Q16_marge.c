#include<stdio.h>
int main(){
    int a=5;
    // printf("enter the size of aray : ");
    // scanf("%d",&a);
    // int arr[2][a];
    // for(int i=0;i<2;i++){
    //     printf("enter elements of %d array : \n",i+1);
    //     for(int j=0;j<a;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    int arr1[]={5,4,3,2,1};
    int arr2[]={10,9,8,7,6};

    int l=0,k=0,arrange[a*2];

    for(int i=0;i<a*2;i++){
        if((arr1[l]>arr2[k])||k==a){
            arrange[i]=arr1[l];
            l++;
        }
        else{
            arrange[i]=arr2[k];
            k++;
        }
    }
     printf("sorted order is : \n");
    for(int i=0;i<a*2;i++){
        printf("%d\t",arrange[i]);
    }
}