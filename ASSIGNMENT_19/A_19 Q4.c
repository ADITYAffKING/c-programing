#include<stdio.h>
int check();
int main(){

   int d=check();
   printf("repeated element is : %d",d);
}
int check(){
    int arr[1000];
    int i,j,k;
    printf("for end press : -32 \n");
    for( i=0;arr[i-1]!=-32;i++){
        
        printf("enter %d element : ",i);
		scanf("%d",&arr[i]);
    }
    for(j=0;j<i;j++){
         for(k=0;k<i;k++){
           if(k==j){
            continue;
           }
           if(arr[j]==arr[k]){
                return arr[j];
            }

         }
    }
}
