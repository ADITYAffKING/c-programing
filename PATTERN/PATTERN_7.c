#include<stdio.h>
int main()
{
	int a,k,j,pk,i,m,l,HT,s;
	printf("enter a number : ");
	scanf("%d",&a);
	printf("\n");
	k=a-1;
	pk=1;
	HT=1;
	for(i=1;i<a;i++){
		for(j=1;j<=k;j++){
			printf(" ");
		}
		k=k-1;
		printf("1");
	if(i==1){
		printf("\n");
	}
	else {
		for(l=1;l<=pk;l++){
			printf(" ");
		}

		printf("%d \n",i);
		pk=pk+2;
		
	}
}

pk=pk+2;
for(m=1;m<=a;m++){
	printf("%d ",m);
}
return 0;
}


/* EXAMPLE OF OUT PUT

enter a number : 9

        1
       1 2
      1   3
     1     4
    1       5
   1         6
  1           7
 1             8
1 2 3 4 5 6 7 8 9

*/
