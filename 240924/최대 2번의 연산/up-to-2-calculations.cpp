#include <iostream>
using namespace std;

int main() {
    int a, total;
    cin >> a;

    if ((a % 2) == 0) {
        total = (a /= 2);
    }
    if((a % 2) != 0){
        total = (a + 1) / 2;
    }

    cout << total;
    return 0;
}