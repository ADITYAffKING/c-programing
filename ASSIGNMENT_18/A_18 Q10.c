#include<stdio.h>
int main()
{
	int i,j,arr[10],store,pal[10];
	for(i=0;i<10;i++){
		printf("enter %d number ",i+1);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<10;i++){
	pal[i]=arr[i];	
	}
	
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
}
