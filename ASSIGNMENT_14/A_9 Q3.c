#include <stdio.h>
void hii();
int main()
{
hii();
    return 0;
}
void hii(){
	
    int a,b;
	printf("enter a number : ");
	scanf("%d",&a);
	
	
	if(a%2==0){
	 printf("number is even\n");
	  if(a%3==0&&a%2==0){
	  	printf("%d is divisible by both 2 and 3\n",a);
	  
	  }
	  if(a%3==0){
	  	printf("%d is divisible by 3\n",a);
	  }
	  else 
	  	printf("%d is not divisible by 3\n",a);

      if(a%2==0){
	  	printf("%d is divisible by 2\n",a);
	  }
	  else 
	  	printf("%d is not divisible by 2\n",a);
	  
}
	else if(a%2!=0){
	
	 printf("number is odd\n");
	   if(a%5==0){
	  	printf("%d is divisible by 5\n",a);
	  	
	  }	
	  else
	   printf("%d is not divisible by 5\n",a);
}
    else
     printf("not a valid no.");
}
