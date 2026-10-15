#include<stdio.h>

void Change_variable(int *ptr1, int *ptr2){
	*ptr1=100;
	*ptr2=200;
}
int main(){
	
	int num1,num2;
	printf("Enter the 1st value:");
	scanf("%d",&num1);
    printf("Enter the 2st value:");
	scanf("%d",&num2);
	
	printf("Before Changing : num1=%d , num2=%d\n",num1,num2);
	Change_variable(&num1,&num2);
	printf("After Changing : num1=%d , num2=%d\n",num1,num2);
	

	
	return 0;
}
