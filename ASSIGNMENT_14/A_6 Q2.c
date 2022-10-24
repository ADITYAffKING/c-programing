
	#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
		float a,b,c,d,e,f,g,h;
	printf("enter your marks of 1st subject : ");
	scanf("%f",&a);
	printf("marks obtain in second subject : ");
	scanf("%f",&b);
	printf("marks obtain in 3rd subject : ");
	scanf("%f",&c);
	printf("marks obtain in 4th  subject : ");
	scanf("%f",&d);
	printf("marks obtain in 5th subject : ");
	scanf("%f",&e);
	f=a+b+c+d+e;
	printf("total marks you obtain out of 500 is : %f \n",f);
	g=f/5;
	printf("your total percentage is : %f",g);
	h=f/5;
	printf("your average marks is : %f",h);
}
