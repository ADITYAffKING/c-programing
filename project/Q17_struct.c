#include<stdio.h>
#include<string.h>
typedef struct student_marks{
 int Sid;
 char sNAME[100];
 float phyMarks;
 float chemMarks;
 float mathMarks;
}sM;  
int main(){
   sM s[5];
   char store[100];
  
   for(int i=0;i<5;i++){
      
      printf("enter id of %d student : ",i);
      scanf("%d",&s[i].Sid);
       fflush(stdin);
 
      printf("enter student name : "); 
      fgets(s[i].sNAME,100,stdin);
      
      
      
      
      printf("enter marks of physics : "); 
      scanf("%f",&s[i].phyMarks);
      printf("enter marks of chemestry : ");
      scanf("%f",&s[i].chemMarks);
      printf("enter marks of maths : ");
      scanf("%f",&s[i].mathMarks);
   }
   
   for(int i=0;i<5;i++){    
      printf("student id : %d\n",s[i].Sid);
      printf("student name : ");puts(s[i].sNAME);
      printf("student marks in physics : %f\n",s[i].phyMarks);
      printf("student marks in chemestry  : %f\n",s[i].chemMarks);
      printf("student marks in maths : %f\n\n\n",s[i].mathMarks);
   }
}