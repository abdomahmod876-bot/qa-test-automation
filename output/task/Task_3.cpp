#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    float sum = a + b + c;
    float average = sum / 3;
    cout << "The sum of the three numbers is: " << sum << endl;
    cout << "The average of the three numbers is: " << average << endl;
     return 0 ;
}