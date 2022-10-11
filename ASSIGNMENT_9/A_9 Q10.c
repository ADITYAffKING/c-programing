#include <stdio.h>
int main()
{
float a,b,c,d,e,value;

printf("enter units of electricity bill");
scanf("%f",&a);
value=a;

if(a>50){
 b=0.50*50;
 value=a-50;
 
}
else 
 b=a*0.50;
 
if(value>100){
	c=(100*0.75);
     value=value-100;
}
else
 c=(value*0.75);
 
if(value>100){
 
  d=100*1.20;
 value=value-100;
}
if(value<=100){
 
  d=value*1.20;
      value=0;
}
e=(value*1.50)+b+c+d;
if(a>250){
	printf("your bill is : %0.1f",e+e/5);
}
else if(a<=250&&a>0);
        printf("your bill is : %0.1f",e);

 



return 0;
}
 
