#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter n: ";
    cin >> n;

    int arr[n];
    cout << "enter element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int* left = arr;
    int* right = arr + n - 1;

    while (left < right) {
        swap(*left, *right);
        left++;
        right--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}