#include<stdio.h>
void negative(int a);
int main()
{
	int a,j;
	printf("enter 1st number : ");
	scanf("%d",&a);
printf("convert to \n + : 1 \n - : 2 \n enter a number 1 or 2 : : ");
scanf("%d",j);
	printf("BEFORE :%d \n",a);


	 switch(j){
	 	case 1 : negative(a);
			break;
		case 2 : negative(a);
		 }
	 }

void negative(int a){
	
	a=a*-1;
	printf("after : %d",a);
}
