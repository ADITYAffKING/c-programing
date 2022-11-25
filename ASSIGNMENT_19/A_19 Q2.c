#include<stdio.h>
int min();
int main()
{
	int k;
    k=min();
	printf("%d",k);
}
int min(){
	int n,a,b,k;
	printf("enter the length of array : ");
	scanf("%d",&n);
	int arr[n],i=0;
	while(i!=n){
		scanf("%d",&b);
		if(i==0){
			k=b;
		}
		if(i!=0){
			if(b<k){
				k=b;
			}
		}
	a=b;
	i++;
		
	}
	return k;
}
