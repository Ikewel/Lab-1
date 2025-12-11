//ten
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5] = {"Jack", "Jill", "Bob", "Jane", "Juliet"};
    int ages[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter age for " << names[i] << ": ";
        cin >> ages[i];
    }

    for (int i = 0; i < 5; i++) {
        if (ages[i] >= 21) {
            cout << names[i] << " can enter." << endl;
        } else {
            cout << names[i] << " cannot enter." << endl;
        }
    }

    return 0;
}