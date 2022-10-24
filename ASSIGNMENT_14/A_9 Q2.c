#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	float A,B,C,D,E,f,G;
	printf("enter the marks in 1st subject - ");
	scanf("%f",&A);
	printf("enter the marks in 2nd subject - ");
	scanf("%f",&B);
	printf("enter the marks in 3rd subject - ");
	scanf("%f",&C);
	printf("enter the marks in 4th subject - ");
	scanf("%f",&D);
	printf("enter the marks in 5th subject - ");
	scanf("%f",&E);
	G=A+B+C+D+E;
    if(G/5>=33){
	 printf("pass \n");
	 
	      printf("your total marks is %f",G);
	  }
	else
	 printf("fail");
}
