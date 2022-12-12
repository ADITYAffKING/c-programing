
#include<stdio.h>
#include<string.h>
  struct student {
    int sId;
    char sName[100];
    int phyMarks;
    int chemMarks;
    int mathMarks;
};
int main(){
     int i;
     float percentage;
     char store[100];
     struct student s[5];
     for(i=1;i<=5;i++){
        printf("ENTER STUDENT NAME : ");
        scanf("%s",store);
        strcpy(s[i].sName,store);
        printf("ENTER STUDENT id : ");
        scanf("%d",&s[i].sId);
        printf("ENTER STUDENT chemestry Marks : ");
        scanf("%d",&s[i].chemMarks);
        printf("ENTER STUDENT physics Marks : ");
        scanf("%d",&s[i].phyMarks);
        printf("ENTER STUDENT maths Marks : ");
        scanf("%d",&s[i].mathMarks);
        printf("\n");
     }
     printf("\n");
     for(i=1;i<=5;i++){
     	percentage=(s[i].chemMarks+s[i].mathMarks+s[i].phyMarks)/3;
     	printf("student name is : %s\nstudent id is : %d\nstudent percentage is : %.2f",s[i].sName,s[i].sId,percentage);
     	printf("\n");
     }

    return 0;
}
