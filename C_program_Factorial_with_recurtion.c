#include<stdio.h>

int factorial(int num1){
	if(num1==0 || num1==1){
		return 1;
	}
	return num1*factorial(num1-1);
}

int main(){
	
	int num=5,result;
	result=factorial(num);
	printf("factorial of %d=%d",num,result);
	
	return 0;
}
