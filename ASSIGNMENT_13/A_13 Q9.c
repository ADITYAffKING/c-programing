#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("your equation is in form of as follow AX^2+BX+C=0\n ax^2+c=0 \n ax^2=0 \n ax^2+bx=0");
	printf("\n");
	printf("enter the value a b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-(4*(a*c));
	if(d>0){
		d=1;
	}
	switch(d){
		case 0 : {
			printf("real & equal roots");
			break;
		}
		case 1 : {
			printf("real & different roots");
			break;
		}
		default:{
			printf("imaginary roots");
			break;
		}
	}
	return 0;
}
