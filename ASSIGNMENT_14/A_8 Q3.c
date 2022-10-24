#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
		int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("%d number is divisible by 2\n",a);
	}
	else
	 printf("%d number is NOT divisible by 2\n",a);
	 
	if(a%3==0){
		printf("%d nuumber is divisible by 3\n",a);
	}
	else
	 printf("%d number is NOT divisible by 3\n",a);
	 
}
