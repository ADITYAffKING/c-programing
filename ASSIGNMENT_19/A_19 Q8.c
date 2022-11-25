#include<stdio.h>
void hii();
int main(){
 hii();
}
void hii(){
		int i,count=0,j,a;
	printf("enter size of array : ");
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		count =0;
		for(j=0;j<a;j++){
			if(arr[i]==-320){
				continue;
			}
			if(arr[i]==arr[j]){
				count++;
			  if(i!=j){
			  		arr[j]=-320;
			  }
			}
		}
		if(arr[i]!=-320){
			printf("%d\t",arr[i]);
		}
	}
}
