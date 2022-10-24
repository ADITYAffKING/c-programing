#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	int a;
	printf("enter a year : ");
	scanf("%d",&a);
	
	if(a%4==0){
		printf("%d is a leap year",a);
	}
	else
	 printf("%d is not a leap year",a);
}
