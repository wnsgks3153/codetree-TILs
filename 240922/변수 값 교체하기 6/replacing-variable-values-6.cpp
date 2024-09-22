#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 5, temp = 0;

    temp = b;
    b = a;
    a = temp;

    cout << a << endl << b;
    return 0;
}