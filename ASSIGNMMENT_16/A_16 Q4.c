#include<stdio.h>
#include<math.h>
int natural(int a);
int main()
{
	int a,sum;
	printf("enter a limit");
	scanf("%d",&a);
	
	sum=natural(a);
	printf("sum of square of first %d natural number is : %d",a,sum);
	
}
int natural(int a){
	int i,k,j;
	k=1;
	for(i=2;i<=a;i++){
		j=pow(i,2);
		k=k+j;
	}
	return k;
}
