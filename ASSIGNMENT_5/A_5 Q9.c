#include <stdio.h>
//to calculate percentage of student
int main()
{
	float A,B,C,D,E,f;
	printf("enter the marks in 1st subject - ");
	scanf("%f",&A);
	printf("enter the marks in 2nd subject - ");
	scanf("%f",&B);
	printf("enter the marks in 3rd subject - ");
	scanf("%f",&C);
	printf("enter the marks in 4th subject - ");
	scanf("%f",&D);
	printf("enter the marks in 5th subject - ");
	scanf("%f",&E);
	
	f=A+B+C+D+E;
	
	printf("your agregate marks is %f",f);
	return 0;
}
