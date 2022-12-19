#include<stdio.h> 
int main()            
{
int fahr;
float celcius;
printf("enter temprature in fahr \n");
scanf("%d",&fahr);
celcius= 5.0/9*(fahr-32) ;
printf("temprature in celcius is = %f \n",celcius);
return 0;


}

/*
OUTPUT

enter temprature in fahr
40
temprature in celcius is = 4


error : 1 = entered  value store in float
        2 = print value in float
        3 = value in line 7 must be float
        */

