// Forth code

#include <iostream>
using namespace std;

int main()
{
   int Number;
    
    cout << "enter an int";
    cin >> Number;
    
if (Number >= 0) {
    cout << Number << " This int is positive";
}

else {
    cout << Number << " This int is negative";
}
    return 0;
}
