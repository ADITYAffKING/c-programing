#include<stdio.h>
int main()
{
	int i,j,arr[10],store;
	for(i=0;i<10;i++){
		printf("enter %d number ",i+1);
		scanf("%d",&arr[i]);
	}

	
for(i=0,j=9;i<5;i++,j--){
	store=arr[i];
	arr[i]=arr[j];
	arr[j]=store;
}

for(i=0;i<10;i++){
	printf("%d",arr[i]);
}
}
