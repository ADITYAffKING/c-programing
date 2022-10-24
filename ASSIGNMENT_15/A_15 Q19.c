#include<stdio.h>
int square(int a);
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	int a2=square(a);
	printf("square of %d is : %d",a,a2);
	return 0;
}
int square(int a){
	a=pow(a,3);
	return a;
}
