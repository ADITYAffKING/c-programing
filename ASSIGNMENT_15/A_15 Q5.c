#include<stdio.h>
void limit(int a);
int main()
{
	int a;
	printf("enter limit of integer ");
	scanf("%d",&a);
	
	limit(a);
	
	return 0;
}
void limit(int a){
	int i;
	for(i=1;i<=a*2;i++){
		if(i%2!=0){
		
		printf("%d\n",i);
	}
}
}
