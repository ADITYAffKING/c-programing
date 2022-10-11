#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number : ");
	scanf("%d",&a);
	b=a%10;
	c=(a%100)/10;
	printf("value at once place is : %d\n",b);
	printf("value at tens place is : %d \n",c);
	
	if(b==c){
		printf("value at once place and tens place are same");
	}
	else
	 printf("value at once place and tens place are not same");
	
	return 0;
}
