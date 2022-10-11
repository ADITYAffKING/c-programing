#include<stdio.h> 
int main()            
{
int fahr,celcius;
printf("enter temprature in fahr \n");
scanf("%d",&fahr);
celcius= 5/9 *(fahr-32);
printf("temprature in celcius is = %d \n",celcius);
return 0;


}

/*
enter temprature in fahr
80
temprature in celcius is = 0


error : 1 = entered  value store in float
        2 = print value in float
        3 = value in line 7 must be float
*/
