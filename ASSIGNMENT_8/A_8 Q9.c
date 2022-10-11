#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number : ");
	scanf("%d",&a);
	
	b=a%10;
	printf("uni digit of %d is %d",a,b);
	return 0;
}
