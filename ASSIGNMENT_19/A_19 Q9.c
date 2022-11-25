#include<stdio.h>
void hii();
int main()
{
hii();	
}
void hii(){
	int i,b,store,j;
	printf("enter no. of elements : ");
	scanf("%d",&b);
	int arr[2][b];
	printf("enter eliments \n");
	for(i=0;i<2;i++){
		for(j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\nnew array \n");		
	}
	int a=0;
	int pal[b*2];
	for(i=0;i<2;i++){
		for(j=0;j<b;j++){
			pal[a]=arr[i][j];
			a++;
		}
	
	}
	for(i=0;i<a;i++){
		printf("%d\t",pal[i]);
	}
}
