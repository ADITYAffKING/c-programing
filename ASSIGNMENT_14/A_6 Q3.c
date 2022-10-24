#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
		char b;
	float a,c,d;
	printf("enter 1st number : ");
	scanf("%f",&a);
	printf("enter 2nd number : ");
	scanf("%f",&c);
	printf("enter opreation you want to do \n 1=plus \n 2=subtraction \n 3=multiplication \n 4=division \n 5=reminder");
	scanf("%d",&b);
	 if(b==1){
	  printf("sum of number 1 and 2 is : %f",a+c);
	  }
	 else if(b==2){
	 	printf(" sub of 1 and 2 is : %f",a-c);
	 }
	 else if(b==3){
	 	printf("product of number 1 and 2 is : %f",a*c);
	 }
	 else if(b==4){
	 	printf("if we devide num1 and 2 we get : %f",a/c);
	 }
	 else if(b==5){
	 	int c;
	 	int a;
	 	printf("reminder of number 1 and 2 is : %d",c%a);
}
     else
      printf("please enter out of (p,m,s,d,r) \n thankyou");
}
