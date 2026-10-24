#include<stdio.h>

int Find_prime_number(int num, int i){
	if (num <= 1) {
        return 0;
    }

    if (i > num / i) {
        return 1;
    }

    if (num % i == 0) {
        return 0;
    }

    return Find_prime_number(num, i + 1);
}

int main(){
	
	int num, i, result;
	
	printf("Enter the number to check it's prime number or not:");
	scanf("%d",&num);
	
	result=Find_prime_number(num, 2);
	
	if(result==0){
		printf("The %d is not a Prime number.",num);
	}else{
		printf("The %d is a Prime number.",num);
	}
	
	return 0;
}
