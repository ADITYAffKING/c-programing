#include <stdio.h>
#define pi 3.14
void hii();
int main()
{
	hii();

	return 0;
}
	void hii(){

	float radius;
	printf("enter the radius of circle - ");
    scanf("%f",&radius);
    printf("PERIMETER OF CIRCLE IS %f",pi*radius*2);			
	}
