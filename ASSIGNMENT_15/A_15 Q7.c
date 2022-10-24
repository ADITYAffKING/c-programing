#include<stdio.h>
int combination(int n,int r);
int calculator1(int n);
int main()
{
	int n,r,total;
	printf("toatal no. of items : ");
	scanf("%d",&n);
	printf("items required at a time : ");
	scanf("%d",&r);
   
    total=combination(n,r);
    
    printf("totl no. of combinations are %d",total);
    
    return 0;
}


int combination(int n,int r){

	
	int N_1=calculator1(n);
	int N_2=calculator1(r);
    int	sub=n-r;
	int N_3=calculator1(sub);
	
	int k=(N_1/(N_2*(N_3)));
	
	return k;
}


int calculator1(int n){
	int i,j;
	j=1;
	for(i=1;i<=n;i++){
		j=j*i;
		
	}
	return j;
}
/*  

example of output :

oatal no. of items : 5
items required at a time : 3
totl no. of combinations are 10
*/
