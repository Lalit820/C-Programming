#include <iostream>
using namespace std;

class Multiplication{
	public:
	int num1,num2,mul;
	
	void getdata(){
		cout<<"Enter the number to prforme Multiplication:";
		cin>>num1>>num2;
	}
	void calculation(){
		mul=num1*num2;
	}
	void displayresult(){
		cout<<"Multiplication is:"<<mul;
	}
};

int main(){
	
	Multiplication mul;
	mul.getdata();
	mul.calculation();
	mul.displayresult();
}
