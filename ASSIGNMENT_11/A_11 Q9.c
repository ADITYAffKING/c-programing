#include<stdio.h>
int main()
{
    int a,i;
    printf("enter a number : ");
    scanf("%d",&a);
    
    for(i=a;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
