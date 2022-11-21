#include<stdio.h>
int main()
{
	int i,j,arr[10],store;
	for(i=0;i<10;i++){
		printf("enter %d number ",i+1);
		scanf("%d",&arr[i]);
	}
	int k=10;
	for(i=0;i<=10;i++){
		for(j=0;j<k;j++){
			if(arr[j]>arr[j+1]){
				store=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=store;
				
			}
		}
		k--;
	}
	
	
		printf("%d\t",arr[1]);
}
