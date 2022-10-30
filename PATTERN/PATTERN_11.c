#include<stdio.h>

int main()
{
	int a,j,i,k;
	printf("enter a number : ");
	scanf("%d",&a);
	k=a;
	for(i=a;i>=1;i--){
		for(j=1;j<=k;j++){
			if(j>=i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		k=k+1;
		printf("\n");
	
	}
	return 0;
	
}

