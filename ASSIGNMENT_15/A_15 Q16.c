#include<stdio.h>
void prime(int a,int b);
int main()
{
	
	int a,b,c; 
	
	printf("enter startig : ");
	scanf("%d",&a);
	printf("enter a limit : ");
	scanf("%d",&b);
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
   prime(a,b);
	
	return 0;
}
void prime(int a,int b){
	int i,j;
	for(i=a;i<=b;i++){
		for(j=2;j<=i ;j++){
			if(j==i){
		 printf("%d\n",i);
		 break;
		}
		 if(i%j==0){
			break;
		}
	
		}
	}
		}

