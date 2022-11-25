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
			if(arr[i]==arr[j]){
				count++;
			}
		}
			printf("%d element is present in array %d times\n",i+1,count);
		
	}
}
