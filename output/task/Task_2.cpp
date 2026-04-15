#include <iostream>
using namespace std;

int main() {
    //ده برنامج بسيط يطلب من المستخدم إدخال اسمه وعمره ورقم هاتفه، ثم يعرض هذه المعلومات.
    string name, mobile;
    int age;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your mobile number: " << endl;
    cin >> mobile;
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your mobile number is " << mobile << endl;
    return 0;
}
