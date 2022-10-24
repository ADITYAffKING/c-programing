#include<stdio.h>
int limit(int a);
int main()
{
	int a,factorial;
	printf("enter limit of integer : ");
	scanf("%d",&a);
	
	factorial=limit(a);
	
	printf("value of %d! = %d",a,factorial);
	
	return 0;
}

int limit(int a){
	int i,j;
	j=1;
	for(i=1;i<=a;i++){

	  j=i*j;
	}
	return j;
}




/* example of output :

 enter limit of integer : 5
 value of 5! = 120

*/
