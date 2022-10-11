#include<stdio.h>
int main()
{
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	if(a>0){
		printf("positive\n");
		  if(a%10==0){
		  	printf("%d is divisible by 10\n",a);
		  }
		  else
		  printf("number is not divisible by 10\n");
	}
	else if(a<0){
		printf("negative\n");
	}
	else
	 printf("number is zero\n");
 return 0;
}
