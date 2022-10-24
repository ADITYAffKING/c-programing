#include<stdio.h>
# define pi 3.14
float circle(float radius);
int main()
{
float a,area;
	printf("enter radius of circle : ");
	scanf("%f",&a);
	
	area=circle(a);
	printf("area of circle is : %0.3f",area);
	return 0;
}
float circle(float radius){
	float d;
	d=pi*radius*radius;
	return d;
}
