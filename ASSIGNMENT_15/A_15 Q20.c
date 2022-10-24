#include <stdio.h>
int factorial(int a);
int main()
{
int a,a2;

printf("enter a number : ");
scanf("%d",&a);

a2=factorial(a);
printf("%d",a2);
	
}
int factorial(int a){
	int i,b,j,k;
	k=1;
	b=1;
	int c=a-1;
	for(i=1;i<a;i++){
		k=1;
		for(j=1;j<=i;j++){
			k=k*j;
		}
	b=b+k;

	
	}
return b;
	}

