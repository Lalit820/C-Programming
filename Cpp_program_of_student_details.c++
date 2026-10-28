#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks;

public:
    void setData() {
        cout<<"Enter the student details:-"<<endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll: ";
        cin >> roll;
        cout << "Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setData();
    s.displayData();

    return 0;
}
