#include<stdio.h>
void prime(int a);
int main()
{
	
	int a; 
	
	printf("enter a limit");
	scanf("%d",&a);
	
prime(a);
	
	return 0;
}
void prime(int a){
	int i,j;
	for(i=1;i<=a;i++){
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

