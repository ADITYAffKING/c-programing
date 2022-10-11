#include <stdio.h>
#define pi 3.14
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	printf("enter length of rectangle : ");
	scanf("%f",&a);
	printf("enter breath of rectangle : ");
	scanf("%f",&b);
	c=a*b;
	d=(a+b)*2;
    printf("area of rectangle is %f \n",c);
	printf("PERIMETER OF RECTANGLE IS : %f \n",d);
	
	printf("enter side of square : ");
	scanf("%f",&e);
	f=e*e;
	g=4*e;
	printf("area of square is : %f \n",f);
	printf("perimeter of square is : %f \n",g);
    printf("enter radius of circle : ");
    scanf("%f",&h);
    i=pi*h*h;
    j=2*pi*h;
    printf("area of circle is : %f \n",i);
    printf("circumferance of circle is : %f \n",j);
    
    printf("enter value of 1st side of triangle : ");
    scanf("%f",&k);
	printf("enter value of 2nd side of triangle : ");
    scanf("%f",&l);
	printf("enter value of 3rd side of triangle : ");
    scanf("%f",&m);
    n=k+l+m;
    printf("sum of sides of triangle is : %f \n",n);
    return 0;
}
