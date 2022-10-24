#include<stdio.h>
int checker(int a,int b);
int main(){
	
	int a,r,b;
	
	printf("enter a number : ");
	scanf("%d",&a);
	printf("enter a digit");
	scanf("%d",&b);
	
	r=checker(a,b);
	if(r==1){
		printf("digit is present in number");
		
	}
	else
	printf("digit is not present in number");
	
}
int checker(int a,int b){
int i=1;
while(i=100){
	int j=a%10;
	if(j==b){
		return 1;
	}
	a=a/10;
	if(b==a){
		return 1;
	}
	else if(a==0){
		return 0;
	}
	i++;
}


}
