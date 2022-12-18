#include<stdio.h>
int main(){
    int countALPHA=1,countSP=0,countINT=0;
    char str[100];
    printf("enter a string :");
    fgets(str,100,stdin);
    for(int i=1;str[i]!='\0';++i){
        if(str[i]>=65&&str[i]<=90 || str[i]>=90&&str[i]<=122){
           countALPHA++;
        }
        else if(str[i]>=48&&str[i]<=57){
            countINT++;
        }
        else if(str[i]>32&&str[i]<=47 || str[i]>=58&&str[i]<=64 || str[i]>=91&&str[i]<=96 || str[i]>=123&&str[i]<=126){
            countSP++;
        }
        else{

        }
    }
        printf("total characters in the string : %d\n",countALPHA);
        printf("total nuumbers in the string : %d\n",countINT);
        printf("total number of spacial characters are : %d",countSP);
    
}