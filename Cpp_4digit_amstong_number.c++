#include <iostream>
using namespace std;

int main() {
    int n, original, digit, sum = 0;

    
    cout << "Enter the number: ";
    cin >> n;

   original = n;

    while (n != 0) {
        digit = n % 10;
        sum = sum + digit * digit * digit * digit;
        n = n / 10;
    }

    if (original == sum)
        cout<<"Armstrong number";
    else
        cout<<"Not an Armstrong number"<<endl;

    return 0;
}
