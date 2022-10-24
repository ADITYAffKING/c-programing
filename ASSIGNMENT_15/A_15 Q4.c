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
	for(i=1;i<=a;i++){
		printf("%d\n",i);
	}
}
}
