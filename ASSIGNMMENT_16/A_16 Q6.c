#include<stdio.h>
int factorial(int a);
int main()
{
	int a,cal;
	printf("enter a number : ");
	scanf("%d",&a);
	
	cal=factorial(a);
	printf("factorial of %d is : %d",a,cal);
	return 0;
}
int factorial(int a){
	int i,j=1;
	for(i=1;i<=a;i++){
		j=j*i;
	}
	return j;
}


/*example of output

enter a number : 5
factorial of 5 is : 120

*/
