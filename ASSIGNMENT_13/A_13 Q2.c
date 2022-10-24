#include<stdio.h>   
void calculator();
void area();
int main()
{

	calculator();
	
	return 0;
	}
void calculator(){
	
int a,b;
int d;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
    printf("enter oprater \n1 = plus\n2 = subtraction\n3 = multiplication\n4 = divide  ");
    scanf("%d",&d);
    switch(d){
    	case 1 : printf("sum of 2 number is : %d",a+b);
    	        break;
	    case 2 : printf("difference of 2 number is : %d",a-b);
    	        break;
    	case 3 : printf("product of 2 number is : %d",a*b);
    	        break;
    	case 4 :if(a>b){
	       printf("divsior of 2 number is : %d",a/b);
	   }
    	       else
    	       printf("divsior of 2 number is : %d",b/a);
			    break;
	}
}

