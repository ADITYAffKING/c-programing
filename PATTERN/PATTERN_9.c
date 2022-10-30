#include<stdio.h>
int main()
{
		int i,j,a;
	printf("enter a number : ");
	scanf("%d",&a);
	
printf("\n");

	for(i=a;i>=1;i--){
		for(j=1;j<=i;j++){
			
			if(j==1||j==i||i==a){
				printf("*");
		}
		
			else{
				printf(" ");
			}
			
		}
		
		printf("\n");
	}

return 0;

}

/*
example of output

enter a number : 20

********************
*                 *
*                *
*               *
*              *
*             *
*            *
*           *
*          *
*         *
*        *
*       *
*      *
*     *
*    *
*   *
*  *
* *
**
*


*/
