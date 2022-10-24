#include<stdio.h>
int main()
{
	int a,j;
	printf("enter the year you want to check : ");
	scanf("%d",&a);
	
	if(a%4==0){
	 j=1;
	 
	}
	else
	j=2;
	
	switch(j){
		case 1 : printf("%d is a leap year",a);
	         	break;
	    case 2 : printf("%d is not a leap year",a);
	}
	return 0;
}
