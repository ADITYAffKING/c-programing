#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	d=a*a;
	e=b*b;
	f=c*c;
	printf("enter length of 1st side  of triangle : ");
	scanf("%d",&a);
	printf("enter length of 2nd side  of triangle : ");
	scanf("%d",&b);
	printf("enter length of 3rd side  of triangle : ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			if(a*a==b*b+c*c){
				printf("valid triangle");
			}
			else
				printf("invalid triangle");
		}
		else
		 if(c*c==a*a+b*b){
		 		printf("valid triangle");
		 }
		 else
		  	printf("invalid triangle");
	}
	else
	 if(b>c){
	 	if(b*b==c*c+a*a){
	 			printf("valid triangle");
		 }
		else
		 	printf("invalid triangle");
	 }
	 else
	  	 if(c*c==a*a+b*b){
		 		printf("valid triangle");
		 }
		 else
		  	printf("invalid triangle");
	}


