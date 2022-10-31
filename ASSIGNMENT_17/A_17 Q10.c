#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<10;i++){
		if(i%2!=0){
			continue;
		}
		j=j+i;
	}
	printf("%d",j);
	return 0;
}
