#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    float height;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your height in meters: " << endl;
    cin >> height;
    cout << "your name is " << name << endl;
    cout << "Your Age is " << age <<endl ;
    cout << "Your Height is " << height << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(char) << " bytes" << endl;

    return 0;
}