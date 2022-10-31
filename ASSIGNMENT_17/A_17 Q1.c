#include<stdio.h>
int comp();
int main()
{
	int a;
	a=comp();
printf("\NSUM OF ALL COMPOSITE NUMBER IS : %d",a);
	
    return 0;
	}
int comp(){
	int i,s,a,j,k;
	k=0;
	s=0;
	for(i=1;i<=10;i++){
		printf("enter a number : ");
		scanf("%d",&a);
		for(j=2;j<=a;j++){
		if(a==j){
		 s=5;
		 break;
		}
		if(a%j==0){
			break;
		}
		
	}
	if(s==5){
		break;
	}
	k=k+a;
	}
	return k;
}

