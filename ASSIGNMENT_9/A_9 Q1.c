#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 1st number : ");
	scanf("%d",&a);
	printf("enter 2nd number : ");
	scanf("%d",&b);
	
	if(a>b){
	
	 printf("number 1 is grater than number 2");
	  if(a>500&&a<1000){
	  	printf("entered number is %d",a);
	  }
}
	else
	printf("number 2 is grater than number 1 \n");
	 if(b>500&&b<1000){
	 	printf("entered number is : %d",b);
	 }
	 return 0;
}
