#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
		int a,b,c,d,e;
	printf("enter marks of first subject out of 100 : ");
	scanf("%d",&a);
	printf("enter marks of second subject  out of 100 : ");
	scanf("%d",&b);	
	printf("enter marks of third subject  out of 100 : ");
	scanf("%d",&c);
	printf("enter marks of fourth subject  out of 100 : ");
	scanf("%d",&d);
	printf("enter marks of fifth subject  out of 100 : ");
	scanf("%d",&e);
	int sum=(a+b+c+d+e)/5;
	if(sum>=33&&sum<=100)
	 printf("you are pass");
	else
	 printf("fail");
	
}
