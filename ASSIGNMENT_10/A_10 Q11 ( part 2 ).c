#include<stdio.h> 
int main()            
{
int fahr,celcius;
printf("enter temprature in fahr \n");
scanf("%d",&fahr);
celcius= 5*(fahr-32)/9 ;
printf("temprature in celcius is = %d \n",celcius);
return 0;


}
/*
OUTPUT

enter temprature in fahr
40
temprature in celcius is = 0

error : 1 = entered  value store in float
        2 = print value in float
        3 = value in line 7 must be float
        */


