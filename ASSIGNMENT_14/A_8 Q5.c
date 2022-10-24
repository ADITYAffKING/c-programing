#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	 int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	if(a==0){
		printf("nuumber you enter is zero");
	}
	else if(a>0){
	
	 printf("positive");
	}
	else
	 printf("negative");
}
