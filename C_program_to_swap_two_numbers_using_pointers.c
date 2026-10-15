#include<stdio.h>

void Swap(int *ptr1, int *ptr2){
	int swap;
	swap=*ptr1;
	*ptr1=*ptr2;
	*ptr2=swap;
}
int main(){
	
	int num1,num2;
	printf("Enter the 1st value:");
	scanf("%d",&num1);
    printf("Enter the 2st value:");
	scanf("%d",&num2);
	
	printf("Before Swapping : num1=%d , num2=%d\n",num1,num2);
	Swap(&num1,&num2);
	printf("After Swapping : num1=%d , num2=%d\n",num1,num2);
	

	
	return 0;
}
