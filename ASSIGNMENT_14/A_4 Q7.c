#include <stdio.h>
float hii(float a);
int main()
{
	float a,b,c;
	printf("enter distance in km : ");
	scanf("%f",&a);
	c=hii(a);
	printf("distance in centimeter is : %0.1f",c);
	return 0;
}
float hii(float a){
	float g;
	g=a*100000;
	return g;
}
	
