#include<stdio.h>
int main()
{
	int n,j,k;
	
	printf("enter a number for which you want factorial : ");
	scanf("%d",&n);
	
	j=n%10;
	k=n-j;
	printf("%d",k);
	
	return 0;
}
