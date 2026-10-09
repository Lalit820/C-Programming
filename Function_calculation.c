#include<stdio.h>
#include<math.h>

int addition(int num1, int num2){
	int sum=num1+num2;
	return sum;
}

int substraction(int num1, int num2){
	int sub=num1-num2;
	return sub;
}

int division(int num1, int num2){
	int div=num1/num2;
	return div;
}

int multiplication(int num1, int num2){
	int mul=num1*num2;
	return mul;
}

int modulas(int num1, int num2){
	int mod=num1%num2;
	return mod;
}

int main(){
	int a,b,result,choice;
	printf("Enter the value :");
	scanf("%d%d",&a,&b);
	printf("Select your choice :\n choice 1=addition\n choice 2=substraction\n choice 3=division\n choice 4=multiplicaton\n choice 5=modulas\n");
	scanf("%d",&choice);
	if(choice==1){
		result=addition(a,b);
		printf("result=%d",result);
	}else if(choice==2){
		result=substraction(a,b);
		printf("result=%d",result);
	}else if(choice==3){
		result=division(a,b);
		printf("result=%d",result);
	}else if(choice==4){
		result=multiplication(a,b);
		printf("result=%d",result);
	}else if(choice==5){
		result=modulas(a,b);
		printf("result=%d",result);
	}else{
		printf("Enter valid number");
	}
	
}

