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

    unordered_map<int, int>mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    // iterate in the unordered map
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cout << "enter time to check: ";
    cin >> q;

    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}