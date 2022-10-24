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
 if(a<10){
 	printf("%d is smaller than 10",a);
 }
 else if(a==10){
 		printf("%d is equal t0 10",a);
 }
 else
 	printf("%d is grater than 10",a);
}
