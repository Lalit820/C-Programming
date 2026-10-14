#include<stdio.h>

int addition(int *ptr1, int *ptr2){
	return *ptr1+*ptr2;
}
int main(){
	
	int num1,num2,sum;
	printf("Enter the 1st value:");
	scanf("%d",&num1);
    printf("Enter the 1st value:");
	scanf("%d",&num2);
	
	sum=addition(&num1,&num2);
	printf("Sum:%d\n",sum);
	
	return 0;
}
