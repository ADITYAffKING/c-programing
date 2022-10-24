#include <stdio.h>
void hii();
int main()
{
	hii();

	return 0;
}
	void hii(){
				float A,B,C;
	printf("enter the 1st side of triangle - ");
	scanf("%f",&A);
	printf("enter the second side of triangle - ");
	scanf("%f",&B);
	printf("enter the third side of triangle - ");
	scanf("%f",&C);
	printf("sum of side is - %0.1f",A+B+C);
	}
