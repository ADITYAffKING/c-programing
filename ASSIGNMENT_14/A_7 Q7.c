#include<stdio.h>
void hii();
int main()
{
hii();
return 0;
}
void hii(){
		int a;
 printf("enter a number  : ");
 scanf("%d",&a);
 if(a%5==0){
 	printf("%d is is divisible by 5",a);
 }
 else
 	printf("%d is  not divisible by 5",a);
}
