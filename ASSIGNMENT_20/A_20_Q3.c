
#include<stdio.h>
#include<string.h>
  struct student {
    int sId;
    char sName[100];
    int SRollno;
    double sMobNo;
};
int main(){
     int i;
     char store[100];
     struct student s[5];
     for(i=1;i<=5;i++){
        printf("ENTER STUDENT NAME : ");
        scanf("%s",store);
        strcpy(s[i].sName,store);
        printf("ENTER STUDENT id : ");
        scanf("%d",&s[i].sId);
        printf("ENTER STUDENT roll number : ");
        scanf("%d",&s[i].SRollno);
        printf("ENTER STUDENT mobile number : ");
        scanf("%d",&s[i].sMobNo);
        printf("\n");
     }
     printf("\n");
     for(i=1;i<=5;i++){
     	printf("student name is : %s\nstudent id is : %d\nstudent roll number : %d\nSTUDENT MOBILE NUMBER : %d\n",s[i].sName,s[i].sId,s[i].SRollno,s[i].sMobNo);
     	printf("\n");
     }

    return 0;
}
