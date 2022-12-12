#include<stdio.h>
struct birthday{
	int day;
	int month;
	int year;
};

int main(){
	int i;
    struct birthday s[5];
    for(i=1;i<=5;i++){
	printf("enter your birth date : ");
	scanf("%d",&s[i].day);
	printf("enter your birth month : ");
	scanf("%d",&s[i].month);
	printf("enter your birth year : ");
	scanf("%d",&s[i].year);	
	printf("\n");
    }

    printf("\n\n");
    for(i=1;i<=5;i++){
    	printf("BIRTH DATE OF %d STUDENT IS : %d:%d:%d\n",i,s[i].day,s[i].month,s[i].year);
	}
	 

}

