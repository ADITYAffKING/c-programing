#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("enter the opreation you  want\n 1 = plus \n 2 = subtraction \n 3 = multiply \n 4 = divide \n 0 = no opreation \n enter opreation numbeer : ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d is gratest ",a);
		}
		else
	    	printf("%d is gratest ",c);
	}
	else
	 if(b>c){
	 	printf("%d is gratest",b);
	 }
	 else
	 printf("%d is gratest",c);
return 0;
}
