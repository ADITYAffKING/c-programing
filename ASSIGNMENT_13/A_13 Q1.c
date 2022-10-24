#include<stdio.h>
void days();
void days2();

int main()
{
	int a,b;
	
	printf(" 1 = january \n 2 = february \n 3 = march \n 4 = aprail \n 5 = may \n 6 = june \n 7 = july \n 8 = august \n 9 = september \n 10 = october \n 11 = november \n 12 = december \n enter a number  ");
	scanf("%d",&a);
	switch(a){
		case 1: days();
		break;
		case 2: {
			printf("enter the year");
			scanf("%d",&b);
			
			if(a%4==0){
				printf(" leap year 29 days");
			}
			else
				printf(" leap year 29 days");
			}
			break;
		
		case 3: days();
		break;
		case 4: days2();
		break;
		case 5: days();
		break;
		case 6: days2();
		break;
		case 7: days();
		break;
		case 8: days();
		break;
		case 9: days2();
		break;
		case 10: days();
		break;
		case 11: days2();
		break;
		case 12: days();
		break;
	}
}
void days()
{
	printf("no.of days are 31");
	
}
void days2()
{
	printf("no.of day are 30");
}

