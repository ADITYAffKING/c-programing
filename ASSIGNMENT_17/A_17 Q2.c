#include<stdio.h>
int prime(int a);
int main()
{
	int a,c;
	printf("enter a number : ");
	scanf("%d",&a);
	
    c=prime(a);
	if(c==0){
		printf("%d is not prime ",a);
	}
	if(c==1){
		printf("%d is prime",a);
	}
}
int prime(int a){
	int i;
	for(i=2;i<=a;i++){
		if(i==a){
		
		return 1;
		}
		if(a%i==0){
			return 0;
		}
	}
}
