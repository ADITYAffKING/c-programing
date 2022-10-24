
#include <stdio.h>
void HII(int a,int b);
int main()
{
	int a,b;
	printf("enter 1st number : ");
	scanf("%d",&a);
	printf("enter 2nd number : ");
	scanf("%d",&b);
    HII(a,b);
}
void HII(int a,int b){
		printf(" value of 1st variable is : %d \n value of 2nd variable is : %d",a,b);
}
