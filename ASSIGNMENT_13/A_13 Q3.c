#include<stdio.h>
void order(int a);
int main()
{
	printf("               welcome\n fruit juices : 50 \n pizaa        : 200 \n onion pizaa  : 300 \n momos pizaa  : 400 \n burger       : 200\n franch fries : 50 \n ice cream    : 70 \n momos        : 100 \n milk shake   : 70 \n sweats       : 100\n");
int a;

printf("enter your choice number");
scanf("%d",&a);
order(a);

	return 0;
}
void order(int a){
	int b,c;
	switch(a){
	case 1:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*50;
		printf("total bill : %d",c);
		break;
	}
		case 2:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*200;
		printf("total bill : %d",c);
		break;
	}
		case 3:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*300;
		printf("total bill : %d",c);
		break;
	}	
	case 4:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*400;
		printf("total bill : %d",c);
		break;
	}
		case 5:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*200;
		printf("total bill : %d",c);
		break;
	}	
	case 6:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*50;
		printf("total bill : %d",c);
		break;
	}
		case 7:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*70;
		printf("total bill : %d",c);
		break;
	}
		case 8:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*100;
		printf("total bill : %d",c);
		break;
	}
		case 9:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*70;
		printf("total bill : %d",c);
		break;
	}
		case 10:{
		printf("enter quantity");
		scanf("%d",&b);
		c=b*100;
		printf("total bill : %d",c);
		break;
	}
}
}

