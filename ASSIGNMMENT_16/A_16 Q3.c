#include<stdio.h>
int natural(int a);
int main()
{
	int a,sum;
	printf("enter a limit");
	scanf("%d",&a);
	
	sum=natural(a);
	printf("sum of first %d odd natural number is : %d",a,sum);
	
}
int natural(int a){
	int i,k;
	k=1;
	int g=a*2;
	for(i=2;i<=g;i++){
	if(i%2!=0){
			k=k+i;
	}	
	
	}
	return k;
}
