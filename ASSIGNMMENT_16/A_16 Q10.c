#include<stdio.h>
int prime(int a);
int main()
{
	int a,SA;
	printf("enter a number : ");
	scanf("%d",&a);
	
    SA=prime(a);
	printf("%d term of fibonachi series is %d",a,SA);
	return 0;
}
int prime(int a){
	
	int r=0;
	int s=1;

	
	int i,t,k;
	k=3;
	if(a==1){
		return 0;
	}
	if(a==2){
		return 1;
	}
	for(i=1;i<=a;i++){
		t=r+s;
	
		r=s;
		s=t;
		if(k==a){
			return t;
		}
		
		k++;
		
	}
	
}
