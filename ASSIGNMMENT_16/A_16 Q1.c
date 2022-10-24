#include<stdio.h>
int natural(int a);
int main()
{
	int a,sum;
	printf("enter a limit");
	scanf("%d",&a);
	
	sum=natural(a);
	printf("sum of first %d natural number is : %d",a,sum);
	
}
int natural(int a){
	int i,k;
	k=1;
	for(i=2;i<=a;i++){
		k=k+i;
	}
	return k;
}
