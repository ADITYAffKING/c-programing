#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	int a,i;
	printf("enter a number  : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		printf("%d \n",i);
	}
}
