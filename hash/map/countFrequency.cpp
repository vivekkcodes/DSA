#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    
    int arr[n];
    cout << "enter array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[13] ={0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int q;
    cout << "enter how many time check: ";
    cin >> q;
    while(q--){
        int number;
        cout << "enter element: ";
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}