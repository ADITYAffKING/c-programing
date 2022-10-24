#include <stdio.h>
void hii();
int main()
{
 hii();
	return 0;
}
void hii(){
		float a;
	printf("enter temprature in farhanite: ");
	scanf("%f",&a);
	printf("temprature in degree centigrate : %0.1f",(a*(5/9))-32);
}
