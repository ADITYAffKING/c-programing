#include<stdio.h>
int main()
{
	int a,i,j;
printf("enter a limit : ");
scanf("%d",&a);

int p=((a+1)/2)+1;
	for(i=1;i<=a;i+=2){

		
		for(j=p;j>=1;j--){
			if(j==1){
				printf("%d",i);
				printf("\n");
				break;
			}
			else if(j==2+(i-2)){
				if(i>1){
				
				printf("%d",i-1);
			}
		
			else{
			
			printf(" ");
	    }
	          
		} 
		
			else{
				printf(" ");
			}

		}
	
			p=p+1;
	
			if(i>1){
		
	}
			
		
		
}

if(a%2==0){
			for(j=1;j<=a;j++)
			{
				printf("%d",j);
			}
}
else{
		for(j=1;j<=a+1;j++)
			{
				printf("%d",j);
			}
}

		
	return 0;
}

