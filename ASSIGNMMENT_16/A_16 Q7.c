#include<stdio.h>
int digit(int a);
int main()
{
	int a,a2;
	printf("enter a number");
	scanf("%d",&a);
	
	a2=digit(a);
	printf("digits in %d is : %d",a,a2);
return 0;

}


int digit(int a){
	int i;
	for(i=1; ;i++){
	if(a<10){
		return i;
	}
	a=a/10;
	
	}
	}
	
	/* example of output 
	
enter a number548650
digits in 548650 is : 6
*/
