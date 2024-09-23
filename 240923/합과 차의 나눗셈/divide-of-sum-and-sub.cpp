#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int a, b;
    cin >> a >> b;
    double c = (a + b) / (double)(a - b);
    cout.precision(2);
    cout << c;
    return 0;
}