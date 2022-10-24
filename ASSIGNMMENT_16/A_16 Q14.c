#include<stdio.h>
int coprime(int a ,int b);
int main()
{
	int a,b,pk;

	printf("enter a number : ");
	scanf("%d",&a);
	printf("enter 2nd number : ");
	scanf("%d",&b);
	pk=coprime(a,b);
	if(pk==0){
			printf("not coprime");
	}
	if(pk==1){
			printf("%d and %d are coprime",a,b);
	}
	return 0;
}
int coprime(int a,int b){
	int i,j,r,c;
		j=2;
	r=a;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	for(i=2;i<=a;i++){
	
		
		if(a%j==0){ 
		    if(b%j==0){
		    return 0;
				break;
			}
			
		}
		j++;
		if(a==i){
		return 1;
			break;
		
		}
	}
}
