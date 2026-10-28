#include <iostream>
using namespace std;

class addition{
	public:
	int num1,num2,sum;
	
	void getdata(){
		cout<<"Enter the number to prforme addition";
		cin>>num1>>num2;
	}
	void calculation(){
		sum=num1+num2;
	}
	void displayresult(){
		cout<<"Sum is:"<<sum;
	}
};

int main(){
	
	addition add;
	add.getdata();
	add.calculation();
	add.displayresult();
}
