#include<stdio.h>
void hii();
int main()
{
hii();
return 0;
}
void hii(){
	float a,b;
	printf("enter selling price : ");
	scanf("%d",&a);
	printf("enter cost price : ");
	scanf("%d",&b);
	
	if(a>b){
		printf(" profit percentage is : %f-",(a/b)*100);
	}
	else if(a==b){
		printf("you did not get profit");
	}
	else
	 printf("you got loss of %f",a/b*100);	float a,b;
	printf("enter selling price : ");
	scanf("%d",&a);
	printf("enter cost price : ");
	scanf("%d",&b);
	
	if(a>b){
		printf(" profit percentage is : %f-",(a/b)*100);
	}
	else if(a==b){
		printf("you did not get profit");
	}
	else
	 printf("you got loss of %f",a/b*100);
}
