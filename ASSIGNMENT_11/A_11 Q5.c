#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("enter how much pairs you want to add : ");
	scanf("%d",&a);
 for(i=1;i<=a;i++){
 	printf("enter first numer : ");
 	scanf("%d",&b);
 	printf("enter second number : ");
 	scanf("%d",&c);
 	printf("sum of %d and %d is %d \n",b,c,b+c);
 }
 printf("\n have a nice day");
 return 0;
}
