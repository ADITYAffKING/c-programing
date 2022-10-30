#include<stdio.h>
int main()
{
	int a,k,j,pk,i,l;
	printf("enter a number : ");
	scanf("%d",&a);
	
	k=a-1;
	pk=1;
	for(i=1;i<a;i++){
		for(j=1;j<=k;j++){
			printf(" ");
		}
		k=k-1;
		printf("*");
	if(i==1){
		printf("\n");
	}
	else {
		for(l=1;l<=pk;l++){
			printf(" ");
		}
		printf("*\n");
		pk=pk+2;
		
	}
}

pk=pk+2;
for(l=1;l<=pk;l++){
	printf("*");
}
return 0;
}
