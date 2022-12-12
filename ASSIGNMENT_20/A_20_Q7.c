#include<stdio.h>
#include<string.h>
    struct employe{
	char name[100];
	int id;
	float salary;
    };
int main()
{

	int i;
    char store[100];
	struct employe S[20];
	for(i=1;i<=20;i++){
    printf("ENTER NAME : ");
    scanf("%s",store);
    strcpy(S[i].name,store); 
    printf("ENTER ID : ");
    scanf("%d",&S[i].id);
    printf("ENTER SALARY : ");
    scanf("%f",&S[i].salary);
    }

    for(i=1;i<=20;i++){
         printf("NAME OF EMPLOYE IS : %s \nHIS ID : %d \nHIS SALARY IS : %.2f\n\n",S[i].name,S[i].id,S[i].salary);
    }

	return 0;
}
