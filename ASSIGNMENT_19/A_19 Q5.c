#include<stdio.h>
void reverse();
int main(){
reverse();	
	
}
void reverse(){
	int store,i,j,arr[1000];
	printf("after enter element end it by enter : -2\n");
	for(i=0;;i++){
	printf("enter %d element : ",i+1);
	scanf("%d",&arr[i]);	
	if(arr[i]==-2){
		break;
	}
	}
	int k=i-1;
	int l=i;
	for(j=0;j<=(i-1)/2;j++){
		store=arr[j];
		arr[j]=arr[k];
		arr[k]=store;
		k--;
	}
	for(j=0;j<i;j++){
		printf("%d\t",arr[j]);
	}
}
