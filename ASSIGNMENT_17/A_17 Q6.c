#include<stdio.h>
int main()
{
		int i,a,j,k=0;
		int l=0;
	for(j=1;j<=10;j++){
		printf("enter a number : ");
		scanf("%d",&a);
	
	for(i=2;i<=a;i++){
		if(i==a){
		a=0;
		l=1;
		break;
		}
		if(a%i==0){
			break;
		}
	}
	k=k+a;
	}
	printf(" sum of all the number is : %d",k);
	if(l==1){
		printf("\n rest sre prime numbers");
	}
	return 0;
}
