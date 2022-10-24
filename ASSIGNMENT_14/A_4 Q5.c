#include <stdio.h>
float hii(float a);
int main()
{
	float a,b;
	printf("enter your salary : ");
	scanf("%f",&a);
    hii(a);
  
    return 0;
}
float hii(float a){
	float b,c;
	b=a*40/100;
	c=b+a;
     	printf("your total salary is : %f",c);
}
