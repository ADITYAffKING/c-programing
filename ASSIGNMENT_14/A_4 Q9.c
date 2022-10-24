#include <stdio.h>
void hii();
int main()
{
	hii();
	return 0;
}
void hii(){
	float a;
	printf("enter height in feets : ");
	scanf("%f",&a);
	printf("height in inches : %0.1f",a*12);
}
