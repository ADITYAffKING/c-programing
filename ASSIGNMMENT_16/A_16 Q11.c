#include<stdio.h>
void prime(int a);
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	
prime(a);
	
	return 0;
}
void prime(int a){
	
	int r=0;
	int s=1;
	printf("0\n1\n");
	
	int i,t;
	for(i=1;i<=a;i++){
		t=r+s;
		printf("%d\n",t);
		r=s;
		s=t;
	}
}
