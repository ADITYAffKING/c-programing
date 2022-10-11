#include<stdio.h>
int main()
{ int a,b;
	printf("enter a number : ");
	scanf("%d",&a);
	
	switch(a){
	
	 case 1 : printf("JANUARY HAVE 31 DAYS");
	          break;
	 case 2 : printf("enter the YEAR  in which you want to check: ");
	          scanf("%d",&b);
	             if(b%4==0)
				  printf("FEBRUARY HAVE 29 DAYS");
				 else
				 printf("FEBRUARY HAVE 28 DAYS");
				  break;
	 case 3 : printf("MARCH HAVE 31 DAYS");
	          break;
	 case 4 : printf("APRAIL HAVE 30 DAYS");
	          break;
	 case 5 : printf("MAY HAVE 31 DAYS");
	           break;
	 case 6 : printf("JUNE HAVE 30 DAYS");
	           break;
	 case 7 : printf("JULY HAVE 31 DAYS");
	          break;
	 case 8 : printf("AUGUST HAVE 31 DAYS");
	            break;
	 case 9 : printf("SEPTEMBER HAVE 30 DAYS");
	           break;
	 case 10 : printf("OCTOBER HAVE 31 DAYS");
	            break;
	 case 11 : printf("NOVEMBER HAVE 30 DAYS");
	            break;
	 case 12 : printf("DECEMBER HAVE 31 DAYS");
	           break;
}
	return 0;
}
