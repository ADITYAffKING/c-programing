#include <stdio.h>
float hallo(float a);
int main()
{
	float a,b,d;
	printf("enter distance in km : ");
	scanf("%f",&a);
    d=hallo(a);
    printf("distance in meter is : %0.1f",d);
  
	return 0;
}
float hallo(float a){
	int b=a*1000;
	  return b;
}
	
