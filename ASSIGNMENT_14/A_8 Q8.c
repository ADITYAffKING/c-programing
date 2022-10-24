#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	 int a,b,c;
	printf("int input first number : ");
	scanf("%d",&a);
	printf("input enter second number : ");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	
	printf("value of a is : %d \nvalue of b is : %d",a,b);
}
