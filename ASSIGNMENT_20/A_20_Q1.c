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
	struct employe S1;
	strcpy(S1.name,"jay");
	S1.id=540;
	S1.salary=540000.0;
	
	struct employe S2;
	strcpy(S2.name,"viay");
	S2.id=541;
	S2.salary=640000.0;

	struct employe S3;
	strcpy(S3.name,"ajay");
	S3.id=540;
	S3.salary=54666.0;

printf("NAME OF EMPLOYE IS : %s \n HIS ID : %d \n HIS SALARY IS : %.2f\n\n",S1.name,S1.id,S1.salary);
printf("NAME OF EMPLOYE IS : %s \n HIS ID : %d \n HIS SALARY IS : %.2f\n\n",S2.name,S2.id,S2.salary);
printf("NAME OF EMPLOYE IS : %s \n HIS ID : %d \n HIS SALARY IS : %.2f",S3.name,S3.id,S3.salary);

	return 0;
}

