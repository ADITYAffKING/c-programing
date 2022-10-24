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
 if(a>=0){
 	printf("%d is positive",a);
 }
 else
 	printf("%d is negative",a);
}
