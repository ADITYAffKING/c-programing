 #include <stdio.h>
 int main()
 {
 
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	if(a%7==0){
		printf("%d number is divisible by 7\n",a);
	}
	else
	 printf("%d number is NOT divisible by 7\n",a);
	 
	if(a%3==0){
		printf("%d nuumber is divisible by 3\n",a);
	}
	else
	 printf("%d number is NOT divisible by 3\n",a);
	 
	 return 0;
}
