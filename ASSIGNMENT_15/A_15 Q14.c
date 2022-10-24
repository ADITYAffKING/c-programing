#include<stdio.h>
int prime(int a);
int main()
{
	int a,c;
	printf("enter a number : ");
	scanf("%d",&a);
	
    c=prime(a);
	printf("%d is your next prime numberafter %d ",c,a);

	
}
int prime(int a){
	int i,j;
	for(i=a+1; ;i++){
		for(j=2;j<=i ;j++){
			if(j==i){
			return j;
		}
		 if(i%j==0){
			break;
		}
	
		}
	}
		}
/*
example output

enter a number : 5
7 is your next prime number after 5
*/
