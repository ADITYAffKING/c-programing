#include<stdio.h>
int main()
{
	int b,c,d,n;
	int i;
	printf("enter number of pairs : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("enter 1st number : ");
		scanf("%d",&b);
		printf("enter 2nd number : ");
		scanf("%d",&c);
		
		d=b+c;
		printf("sum of %d and %d is : %d\n\n",b,c,d);
	
	}
	return 0;
}
	
