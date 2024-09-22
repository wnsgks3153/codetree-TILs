#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double ft = 30.48, a;
    cin >> a;

    cout.precision(1);
    cout << ft * a;
    return 0;
}