#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;
    int temp = 0;

    temp = b;
    b = a;
    a = temp;

    cout << a << endl << b;
    return 0;
}