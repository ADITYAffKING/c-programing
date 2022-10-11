#include<stdio.h>
int main()
{ int a,b;
	printf("enter a number 1 to 7 : ");
	scanf("%d",&a);
	
	switch(a){
		 case 1 : printf("monday");
	          break;
	 case 2 :  printf("tuesday");
				  break;
	 case 3 : printf("wednusday");
	          break;
	 case 4 : printf("thursday");
	          break;
	 case 5 : printf("friday");
	           break;
	 case 6 : printf("saturday");
	           break;
	 case 7 : printf("sunday");
	          break;
	     }
			  return 0;
	      }
