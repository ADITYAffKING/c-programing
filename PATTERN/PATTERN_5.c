#include<stdio.h>
int main()
{
	int i,pk,a,k,t,j;
	printf("enter a number");
	scanf("%d",&a);
	pk=1;
	k=a-1;
for	(i=1;i<=a;i++){
	for(j=1;j<=k;j++){
		printf(" ");
		
	}
	k=k-1;
	printf("*");
	if(i==1){
		printf("\n");
	}
	if(i>1){
	
	for(t=1;t<=pk;t++){
		printf(" ");
	
	}
		printf("*");
	pk=pk+2;
	printf("\n");
}
}
k=1;
pk=pk-4;
for	(i=1;i<=a-1;i++){
	for(j=1;j<=k;j++){
		printf(" ");
		
	}
	k=k+1;
	printf("*");
	if(i==a){
		printf("\n");
	}
	if(i<a-1){
	
	for(t=1;t<=pk;t++){
		printf(" ");
	
	}
		printf("*");
	pk=pk-2;
	printf("\n");
}
}
}
