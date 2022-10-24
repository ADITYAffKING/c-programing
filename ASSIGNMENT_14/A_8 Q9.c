#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	int a,b;
	printf("enter a number : ");
	scanf("%d",&a);
	
	b=a%10;
	printf("uni digit of %d is %d",a,b);
}
