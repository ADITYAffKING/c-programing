#include<stdio.h>
int main()
{
	int a,b,c;
	printf("your equation is given in form of \n 1: ax^2+bx+c=0 \n 2: ax^2+c=0 \n 3: ax^2+bx=0 \n");
	printf("enter the value of  a : ");
	scanf("%d",&a);
	printf("enter  the value of  b  : ");
	scanf("%d",&b);
	printf("enter  the value of  c : ");
	scanf("%d",&c);
	
	if(b*b-4*a*c>0){
		printf("real or distinct roots");
	}
	else if(b*b-4*a*c==0){
		printf("real and equal roots");
	}
	else
	 printf("imaginary roots");
}
