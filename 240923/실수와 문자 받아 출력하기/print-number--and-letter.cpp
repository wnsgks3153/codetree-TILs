#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << fixed;

    string c;
    double a, b;
    cin >> c >> a >> b;
    cout << c << endl;

    cout.precision(2);
    cout << a << endl << b;
    return 0;
}