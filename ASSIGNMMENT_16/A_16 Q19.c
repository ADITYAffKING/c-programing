#include<stdio.h>
#include<math.h>
void angstrom();
int main(){
	angstrom();
	
	return 0;
}
void angstrom(){
		int k,l,r,i,c,b,pk,ht,p;
	k=0;
	r=1;
	p=0;
	i=1;
	p=i;

	for(l=1;;l++){
	if(p<10){
		k=p*p*p;
		ht=i;
		i++;
		p=i;
		
	}
	else{
	
		for(pk=1;;pk++){
			

		
		b=p%10;
		c=b*b*b;
		k=k+c;
		p=p/10;
	
		if(p==0){
		ht=i;
		  i++;
		  p=i;
		  
		  break;
	}
	

    
	
	
}
	}
		
if(i==1002){
break;		
}


	if(k==ht){
		printf("%d\n",k);
	}
	k=0;
}
	
	}
	


	
