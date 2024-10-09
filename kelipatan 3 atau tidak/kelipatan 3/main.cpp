#include <iostream>
using namespace std;


int max (int a) {
    if (a % 3 == 0) {
        cout << a << " adalah kelipatan 3." << endl;
    } else {
        cout << a << " adalah bukan kelipatan 3." << endl;
    }
}

int main() {
    int x;

    cout << "Masukkan bilangan: ";
    cin >> x;

    int bilangan1 = max (x);

    return 0;
}
