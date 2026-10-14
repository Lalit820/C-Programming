#include<stdio.h>

int main(){
	
	int a=0,b=0;
	printf("Enter the value to compare:");
	int *ptr=&a;
	int *ptr1=&b;
	scanf("%d%d",&a,&b);

	
	if(ptr>ptr1){
		printf("First value is greter\n");
	}else{
		printf("Second value is greter\n");
	}
	
}
