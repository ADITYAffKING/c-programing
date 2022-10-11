#include <stdio.h>
int main()
{
	float a;
	printf("enter distance in km : ");
	scanf("%f",&a);
	
	printf("distance in centimeter is : %0.1f \n",a*100000);
	printf("distance in melimeter is : %0.1f \n",a*1000000);
	printf("distance in inches is : %0.1f \n",a*(100000/2.54));
	return 0;
}
