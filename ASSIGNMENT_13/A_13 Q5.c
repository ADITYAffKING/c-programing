#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("enter 1st side of triangle : ");
	scanf("%d",&a);
	printf("enter 2nd side of triangle : ");
	scanf("%d",&b);
	printf("enter 3rd side of triangle  : ");
	scanf("%d",&c);
	printf("enter a number : ");
	scanf("%d",&d);
	switch(d){
		case 1 : {
			if(a==b || b==c || c||a){
				printf("isoceles triangle");
			}
			else
			printf("nota na isoceles triangle");
			break;
		}
		case 2 :{ 
		  if(a>=b&&a>=c){
		  	if(pow(a,2)==b*b+c*c){
		  		printf("right angle triangle");
			  }
	
	}
	
	      else if(b>=a&&b>=c){
		    	if(pow(b,2)==a*a+c*c){
		    		printf("right angle triangle");
		    	  }
	    	} 
		
	      else if(c>=a&&c>=b){
		  	if(pow(b,2)==a*a+c*c){
		  		printf("right angle triangle");
			  }
		}
		else 
		printf("not a right angle triangle");
		
		break;
	}
		
		case 3 : {
		    if(a==b&&b==c&&c==a){
			printf("equilatrel triangle");
			
	}
		else 
		printf("not an equilatrel trianglr");
		
		break;
		}
   case 4 : break;
}
return 0;
}
