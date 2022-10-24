
#include<stdio.h>
void adi(int a);
int main()
{
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
    adi(a);
    return 0;
}
void adi(int a){
		printf("value of variable is : %d",a);
}
