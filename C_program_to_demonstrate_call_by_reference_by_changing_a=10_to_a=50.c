#include<stdio.h>

void Change_value(int *ptr1){
	*ptr1=50;
	printf("Inside Function : num1=%d\n",*ptr1);
}
int main(){
	
	int num1=10;
	
	printf("Before Function call : num1=%d\n",num1);
	Change_value(&num1);
	printf("After Function call : num1=%d\n",num1);
	

	
	return 0;
}
