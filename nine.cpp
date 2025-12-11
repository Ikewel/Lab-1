//nine
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "enter two numbers: " << endl;
    cin >> num1 >> num2;

    int remainder = num1 % num2;

    cout << remainder << endl;

    return 0;
}
