#include<stdio.h>
int main(){
	int a,r,j,l,k,i;
	printf("enter a number : ");
	scanf("%d",&a);
	printf("\n");
	r=1;
	j=a;
	for(i=1;i<=a;i++){
		j=j-1;
		for(l=1;l<=j;l++){
			printf(" ");
			
		}
				for(k=1;k<=r;k++){
					printf("*");
				}
				printf("\n");
				r=r+2;
		
	}
	return 0;
}

/*
example of output

enter a number : 8

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************

 */
