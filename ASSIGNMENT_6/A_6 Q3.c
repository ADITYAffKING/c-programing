#include<stdio.h>
int main()
{
	char b;
	float a,c,d;
	printf("enter 1st number : ");
	scanf("%f",&a);
	printf("enter 2nd number : ");
	scanf("%f",&c);
	printf("enter opreation you want to do \n p=plus \n s=subtraction \n m=multiplication \n d=division \n r=reminder");
	scanf("%c",&b);
	 if(b=='p'){
	  printf("sum of number 1 and 2 is : %f",a+c);
	  }
	 else if(b=='s'){
	 	printf(" sub of 1 and 2 is : %f",a-c);
	 }
	 else if(b=='m'){
	 	printf("product of number 1 and 2 is : %f",a*c);
	 }
	 else if(b=='d'){
	 	printf("if we devide num1 and 2 we get : %f",a/c);
	 }
	 else if(b=='r'){
	 	printf("reminder of number 1 and 2 is : %f",ca);
}
     else
      printf("please enter out of (p,m,s,d,r) \n thankyou");
  return 0;
}
