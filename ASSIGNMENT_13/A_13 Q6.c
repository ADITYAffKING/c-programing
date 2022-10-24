#include<stdio.h>
int main()
{
    int a;
	printf("enter a number 1 to 3 : ");
	scanf("%d",&a);
	
	switch(a){
		case 1 : printf("GOOD");
			break;
		case 2 : printf("BETTER");
			break;
		case 3 : printf("BEST");
			break;
		default : {
			printf("invalid");
			break;
		}
		
	}
	
	return 0;
}
