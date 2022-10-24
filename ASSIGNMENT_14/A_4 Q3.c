#include <stdio.h>
void hii(int a,int b,int c);
int main()                         
{
	int a,b,c;
	printf("enter 1st number : ");
	scanf("%d",&a);
	printf("enter 2nd number : ");
	scanf("%d",&b);
	c=a*b;
 hii(a,b,c);
}
void hii(int a,int b,int c){
		printf("product of number a and b is : %d",c);
}
