#include<stdio.h>
int main()
{
	
	int i,a;
	for(i=0;i<10;i++){
		printf("enter number : ");
		scanf("%d",&a);
		if(a==10){
			break;
		}
		if(a<1){
	    	printf("not a natural number : ");
		i=i-1;
		}
		printf("%d\n",a);	
	}
	
}
