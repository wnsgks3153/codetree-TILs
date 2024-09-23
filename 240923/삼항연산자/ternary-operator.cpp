#include <iostream>
using namespace std;

int main() {
    int point;
    cin >> point;
    char total;

    total = (point == 100) ? "pass" : "failure";
    cout << total;
    return 0;
}