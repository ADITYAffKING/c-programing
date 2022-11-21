#include<stdio.h>
int main()
{
	int i,j=0,arr[10];
	
	for(i=0;i<10;i++){
		printf("enter %d element",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[j]<arr[i]){
			j=i;
		}
	}
	printf("gratest number is : %d",arr[j]);
}
