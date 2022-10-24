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
 if(a%2==0){
 	printf("%d is even",a);
 }
 else
 	printf("%d is odd",a);
}
