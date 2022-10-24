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

	
	int i,t;
	for(i=1;i<=a;i++){
		t=r+s;
		if(a==0){
			printf("%d lies in fibonnaci series",a);
		    break;
		}
		if(t==a){
		    printf("%d lies in fibonnaci series",a);
		    break;
		}
		if(t>a){
			printf("%d didn't lies in fibonnaci series",a);
			break;
		}
		r=s;
		s=t;
	}
}
