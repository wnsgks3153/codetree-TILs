#include <iostream>
using namespace std;

int main() {
    int a = 13;
    double b = 0.165;
    cout << fixed;
    cout << a << " * ";

    cout.precision(6);
    cout << b << " = " << a * b;
    return 0;
}