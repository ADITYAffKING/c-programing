#include<stdio.h>
#include<math.h>
int angstrom(int a);
int main(){
	int a,pk;
	printf("enter a number");
	scanf("%d",&a);
	
	pk=angstrom(a);
	if(pk==1){
		printf("angstrom number");
	}
	if(pk==0){
		printf("not angstrom");
	}
	
	return 0;
}
int angstrom(int a){
	int k,r,i,c,b;
	k=0;
	r=a;
	for(i=1;;i++){
		if(a==0){
		
			if(k==r){
				return 1;
				break;
			}
			else
			
			 return 0;
		}
		
		
		b=a%10;
		c=pow(b,3);
	
		a=a/10;
		k=k+c;
		printf("%d\n",k);
	}
	}

