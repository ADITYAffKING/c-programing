#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("enter the opreation you  want\n 1 = plus \n 2 = subtraction \n 3 = multiply \n 4 = divide \n 0 = no opreation \n enter opreation numbeer : ");
	scanf("%d",&c);
	
	switch(c){
	case 0:printf("]a and b is : %d%d",a,b);
	 break;
	case 1:printf("sum of a and b is : %d",a+b);
	 break;
	case 2:printf("difference of a and b is : %d",a-b);
	 break;
	case 3:printf("product of a and b is : %d",a*b);
	 break;
	case 4:printf("quationet of a and b is : %d",a/b);
	 break;
	case 5:printf("reminder of a and b is  : %d",a%b);
	 break;
	 
}
}

