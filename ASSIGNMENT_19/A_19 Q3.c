#include<stdio.h>
int asc();
int dsc();
int main()
{
	char a;
	printf("for assending press A \n for decending press B\n");
	scanf("%c",&a);
	
	switch(a){
	
	case 'a': asc();
    case 'A': asc();
	case 'b': des();
	case 'B': des();
}
}
int asc(){
	int b,store,i;
	printf("entetr the limit of array : ");
	scanf("%d",&b);
	int arr[b];
	
	for(i=0;i<b;i++){
		scanf("%d",&arr[i]);
	     if(i>0){
	     	if(arr[i]<arr[i-1]){
	     		arr[i]=store;
	     		arr[i]=arr[i-1];
	     		arr[i-1]=store;
			 }
		 }
	}
	for(i=0;i<b;i++){
		printf("%d\t",arr[i]);
	}
}
