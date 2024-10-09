#include <iostream>
using namespace std;


int max (int a) {
    if (a % 2 == 0) {
        cout << a << " adalah bilangan genap." << endl;
    } else {
        cout << a << " adalah bilangan ganjil." << endl;
    }
}

int main() {
    int x;

    cout << "Masukkan bilangan: ";
    cin >> x;

    int bilangan1 = max (x);

    return 0;
}
