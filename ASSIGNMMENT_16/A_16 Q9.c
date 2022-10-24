#include<stdio.h>
int reverse(int a);
int main()
{
	int a,ch;
	printf("enter a number : ");
	scanf("%d",&a);
	
	ch=reverse(a);
	printf("reverse of %d is : %d",a,ch);
	
	return 0;
}
int reverse(int a){
	int c,i,b;
	c=0;
	for(i=1;;i++){
		if(a<=9){
			c=c*10+a;
			return c;
		}
	b=a%10;
    c=(c*10)+b;

	a=a/10;
	}
}
/* example of output :

enter a number : 548526
reverse of 548526 is : 625845 
*/
