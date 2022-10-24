#include <stdio.h>
float calculate(float a, float b,float c);
int main()
{
	float a,b,c,simpleintrest;
	printf("enter principle : ");
    scanf("%f",&a);
    printf("enter time in years : ");
    scanf("%f",&b);
    printf("enter rate of intrest : ");
    scanf("%f",&c);
simpleintrest=calculate(a,b,c);
printf(" simple intrest for %0.1f \n rate : %0.1f \n for time : %0.1f \n is :%0.1f",a,b,c,simpleintrest);
}
float calculate(float a, float b,float c){
	int d=a*b*c;
	return d;
}
