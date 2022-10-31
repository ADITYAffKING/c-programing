#include<stdio.h>
int main()
{
	int a,i,k=0;
	
	for(i=1;i<=10;i++){
		printf("enter a number : ");
		scanf("%d",&a);
	
		if(a>0){
				k=k+a;
		
		}
        else
        {
        	printf(" negative number again ");
		}
	
	}
		printf("sum of number is : %d",k);
	return 0;
}
