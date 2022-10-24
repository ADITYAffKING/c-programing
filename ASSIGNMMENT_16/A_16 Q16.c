#include<stdio.h>
void prime(int a,int b);
int main()
{
	int a,b;
	printf("enter 1st number : ");
	scanf("%d",&a);
	printf("enter 2nd number : ");
	scanf("%d",&b);
	
prime(a,b);
return 0;
}
	
void prime(int a, int b){
int i,j;
for(i=a;i<=b;i++){
	for(j=2;j<=i;j++){
		if(i==j){
			printf("%d\n",j);
		}
		if(i%j==0){
			break;
		}
		
	}
}
}

/*
example of output


enter 1st number : 5
enter 2nd number : 100
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
