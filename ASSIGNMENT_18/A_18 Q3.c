#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++){
    printf("enter %d number : ",i);
    scanf("%d",&arr[i]);
}
    int sum = 0,od=0;
    for(i=0;i<10;i++){
    	if(arr[i]%2==0){
    		sum=sum+arr[i];
		}
		else{
			od=od+arr[i];
		}
        
    }

    printf("sum of even number is : %d\n",sum);
    printf("sum of odd number is : %d",od);
}
