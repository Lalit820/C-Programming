#include <iostream>
using namespace std;

class division{
	public:
	float num1,num2,div;
	
	void getdata(){
		cout<<"Enter the number to prforme division:";
		cin>>num1>>num2;
	}
	void calculation(){
		div=num1/num2;
	}
	void displayresult(){
		cout<<"Division is:"<<div;
	}
};

int main(){
	
	division di;
	di.getdata();
	di.calculation();
	di.displayresult();
}
