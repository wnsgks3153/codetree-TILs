#include <iostream>
#include <string>
using namespace std;

int main() {
    int point;
    cin >> point;
    string total;

    total = (point == 100) ? "pass" : "failure";
    cout << total;
    return 0;
}