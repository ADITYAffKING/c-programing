#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
		int a;
 printf("enter a number from 1 to 100 : ");
 scanf("%d",&a);
 if(a>=50&&a<=100){
 	printf("ssuccess");
 }
 else
  printf("fail");
}
