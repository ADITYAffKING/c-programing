#include <stdio.h>
// to calculate perimeter of rectangle      
int main()
{ 
	int length,breath;
	printf("enter the length of rectangle - ");
	scanf("%d",&length);
	printf("enter the breath of rectangle - ");
	scanf("%d",&breath);
	printf("PERIMETER OF RECTANGLE IS - %d",(length+breath)*2);
    return 0;
}
