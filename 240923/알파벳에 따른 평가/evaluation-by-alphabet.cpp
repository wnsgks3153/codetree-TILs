#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;

    if (a == 'S'){
        cout << "Superior";
    }
    else if (a == 'A'){
        cout << "Excellent";
    }
    else if (a == 'B'){
        cout << "Good";
    }
    else if (a == 'C'){
        cout << "Usually";
    }
    else {
        cout << "Effort";
    }
    return 0;
}