#include <iostream>
using namespace std;

int main() {
    int num, factorial, i;

    
    cout << "Enter the number to find factorial: ";
    cin >> num;
    
    if (num==0 || num==1){
        cout<<"Factorial is 1";
    }
	for(i=0; i<=num; i++){
        factorial=num*i;
        cout<<"Factorial of %d = %d"<<num,factorial;
    }
    return 0;
}
