#include<stdio.h>
int main()
{
 int a;
  do{
  	printf("enter a number : ");
  	scanf("%d",&a);
  
	 if(a!=0){
	 	 printf("%d\n",a);
	 }
  }while(a!=0);
  return 0;
}
