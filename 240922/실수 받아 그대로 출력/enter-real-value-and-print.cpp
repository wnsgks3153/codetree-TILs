#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double a;
    cin >> a;

    cout.precision(2);
    cout << a;
    return 0;
}