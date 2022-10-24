#include<stdio.h>
int check(int a);
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	printer=check(a);
	printf("%d",printer);
	return 0;
}
int check(int a){
	if(a%2==0){
		return 1;
	}
	else 
	return 0;
}
