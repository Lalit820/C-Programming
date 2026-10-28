#include <iostream>
using namespace std;

class Substraction{
	public:
	int num1,num2,sub;
	
	void getdata(){
		cout<<"Enter the number to prforme Substraction:";
		cin>>num1>>num2;
	}
	void calculation(){
		sub=num1-num2;
	}
	void displayresult(){
		cout<<"Substraction is:"<<sub;
	}
};

int main(){
	
	Substraction sub;
	sub.getdata();
	sub.calculation();
	sub.displayresult();
}
