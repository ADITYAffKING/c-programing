#include<stdio.h>
void factor(int a);
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	factor(a);
	
	return 0;
	
}
void  factor(int a){
	int i,j=2;
	for(i=1;;i++){
		if(a%j==0){
			printf("%d ",j);
			a=a/j;
		}
		else{
	     j++;

            	}
	    if(a==1){
		break;
	}

		
	}
}
