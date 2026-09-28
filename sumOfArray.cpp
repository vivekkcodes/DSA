#include <iostream>
using namespace std;

int arraySum(int arr[], int n) {
    if (n == 0)
        return 0;

    return arr[n - 1] + arraySum(arr, n - 1);
}

int main() {
    int n ;
    cout << "enter n: ";
    cin >> n;

    int arr[n];
    cout << "enter element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Sum = " << arraySum(arr, n);
    return 0;
}
