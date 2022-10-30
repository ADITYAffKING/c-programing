#include<stdio.h>
int main()
{
	int a,i,j,k;
	printf("enter a number");
	scanf("%d",&a);
	k=a;
	for(i=1;i<=a;i++){
		for(j=1;j<k;j++){
			printf(" ");
			
			
		}
		k=k-1;
			for(j=i;j>=1;j--){
			printf("%d",j);
		}
		for(j=2;j<i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	
		
	}
	return 0;
}

/*
example of output

enter a number9
        1
       212
      32123
     4321234
    543212345
   65432123456
  7654321234567
 876543212345678
98765432123456789
*/
