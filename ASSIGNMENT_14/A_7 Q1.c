#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
		int a,b;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	
	if(a>b){
	 printf("a is grater %d",a);
}
	else
	 printf("b is grater : %d",b);
}
