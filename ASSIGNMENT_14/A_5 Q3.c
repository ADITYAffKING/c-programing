#include <stdio.h>
void hii();
int main()
{
	hii();

	return 0;
}
	void hii(){
			int length,breath;
	printf("enter the length of rectangle - ");
	scanf("%d",&length);
	printf("enter the breath of rectangle - ");
	scanf("%d",&breath);
	printf("PERIMETER OF RECTANGLE IS - %d",(length+breath)*2);
	}
