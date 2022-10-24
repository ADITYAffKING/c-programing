#include<stdio.h>
int lcm(int a,int b);
int main(){
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	lcm(a,b);
	return 0;
}
int lcm(int a,int b){
	if(a<b){
		int c=a;
		a=b;
		b=c;
	}
	int i;
	for(i=a;i<=a*b,i++;){
		if(a%b==0){
			printf("lcm is %d",a);
			break;
		}
		else if(i%a==0&&i%b==0){
			printf("lcm is %d",i);
			break;
		}
		
		}
	}

