#include<stdio.h>
int main()
{
 int a,b,c;
printf("enter 1st side of triangle : ");
scanf("%d",&a);
printf("enter 2nd side of triangle : ");
scanf("%d",&b);
printf("enters 3rd side of triangle : ");
scanf("%d",&c);

if(a==b&&b==c&&c==a){
	printf("EQUILATREL TRIANGLE");
}
else if(a==b||b==c||c==a){
	printf("ISOCELES TRIANGLE ");
}
else
 printf("SCALAR TRIANGLE");
 
 return 0;
}
