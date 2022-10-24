#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	int a,b;
	printf("enter a amount in INDIAN RS  that you want to convert in usd : ");
	scanf("%d",&a);
	
	b=a/80;
	printf("amount in USD is : %d",b);
}
