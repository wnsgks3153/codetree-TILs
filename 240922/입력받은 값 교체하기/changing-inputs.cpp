#include <iostream>
using namespace std;

int main() {
    int a, b, temp = 0;
    cin >> a >> b;
    temp = b;
    b = a;
    a = temp;
    cout << a << " " << b;
    return 0;
}