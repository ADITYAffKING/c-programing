#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
int a,b,c;
printf("enter 1st side of triangle : ");
scanf("%d",&a);
printf("enter 2nd side of triangle : ");
scanf("%d",&b);
printf("enters 3rd side of triangle : ");
scanf("%d",&c);

if(a+b>c&&a+c>b&&b+c>a){
	printf("valid trianglr");
}
else
 printf("invalid triangle");
}
