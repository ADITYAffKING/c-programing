#include<stdio.h>
#include<math.h>
int hii(int a,int j,int k);
int hallo(int b,int j,int r);
int main()
{
	int a,a2,a1,ad,i,n_1,n_2,b,j,r,k;
	j=2;
	r=0;
	k=0;
	a2=1;
	printf("enter a number ");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	
	for(i=1; ;i++){
		n_1=hii(a,j,k);
	
	ad = pow(j,n_1);
	
		a/=ad;
		
		n_2=hallo(b,j,r);
	
	int ac = pow(j,n_2);
	
		b/=ac;
		
		if(n_1<=n_2){
			a1=n_1;
			a2=(pow(j,n_1))*a2;
		}
		else{
			a1=n_2;
			a2=(pow(j,n_2))*a2;
		}
		if(a==1||b==1){
			break;
		}
			j++;
			
	}
	printf("hcf is %d",a2);
	return 0;
}


int hii(int a,int j,int k){
	int i;
	for(i=1; ;i++){
		if(a==j){
			k=k+1;
			return k;
		}
		else if(a%j==0){
		a=a/j;
		k++;
			
		}
		else{
			return k;
		}

	}
}
int hallo(int b,int j,int r){
	int i;
	for(i=1; ;i++){
			if(b==j){
			r=r+1;
			return r;
		}
		if(b%j==0){
		b/=j;
		r++;
			
		}
		else{
			return r;
		}
		
	
	}
}
