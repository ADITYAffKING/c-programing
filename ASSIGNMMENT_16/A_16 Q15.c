#include<stdio.h>
void prime();
int main()
{
	
prime();
return 0;
}
	
void prime(){
int i,j;
for(i=2;i<=100;i++){
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
/* output

2
3
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
