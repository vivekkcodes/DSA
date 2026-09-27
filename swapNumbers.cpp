#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a,b;
    cout <<"enter numbers: ";
    cin >> a;
    cin >> b;

    cout << "Before: " << a << " " << b << endl;

    swapNumbers(a, b);

    cout << "After: " << a << " " << b;

    return 0;
}
